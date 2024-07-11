string file_name_check(string file_name){
    int dot_count = 0;
    int digit_count = 0;
    bool starts_with_letter = false;

    for(int i = 0; i < file_name.length(); i++){
        if(file_name[i] == '.'){
            dot_count++;
        } else if(isdigit(file_name[i])){
            digit_count++;
        } else if(isalpha(file_name[i])){
            starts_with_letter = true;
        }
    }

    if(dot_count > 1 || digit_count > 3 || !starts_with_letter){
        return "No";
    }

    string extension = file_name.substr(file_name.find('.') + 1);
    if(extension != "txt" && extension != "exe" && extension != "dll"){
        return "No";
    }

    return "Yes";
}