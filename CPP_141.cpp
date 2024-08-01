string file_name_check(string file_name){
    int digit_count = 0, dot_count = 0;
    bool valid = true;

    for(int i=0; i<file_name.length(); i++){
        if(file_name[i] >= '0' && file_name[i] <= '9'){
            digit_count++;
        }
        else if(file_name[i] == '.'){
            dot_count++;
        }
        else if(dot_count > 1 || (i > 0 && !isalpha(file_name[i-1]))){
            valid = false;
            break;
        }
    }

    string extension = file_name.substr(file_name.find('.') + 1);
    if(extension != "txt" && extension != "exe" && extension != "dll"){
        valid = false;
    }

    return (valid) ? "Yes" : "No";
}