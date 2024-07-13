string file_name_check(string file_name){
    int dot_count = 0;
    int digit_count = 0;
    bool valid_start = false;

    for(int i=0; i<file_name.length(); i++){
        if(file_name[i] == '.'){
            dot_count++;
        }
        else if(isdigit(file_name[i])){
            digit_count++;
        }
        else if(i==0 && isalpha(file_name[i])){
            valid_start = true;
        }
    }

    if(digit_count > 3 || dot_count != 1 || !valid_start){
        return "No";
    }

    string extension = file_name.substr(file_name.find('.')+1);
    if(extension!="txt" && extension!="exe" && extension!="dll"){
        return "No";
    }

    return "Yes";
}