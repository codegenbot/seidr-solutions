string file_name_check(string file_name){
    int dot_count = 0;
    int digit_count = 0;
    bool valid = true;

    for(int i=0; i<file_name.length(); i++){
        if(file_name[i] == '.')
            dot_count++;
        else if(isdigit(file_name[i]))
            digit_count++;
        else if(!isalpha(file_name[i]) && i < file_name.find('.'))
            valid = false;
    }

    if(digit_count > 3 || dot_count != 1)
        valid = false;

    string extension = file_name.substr(file_name.find('.')+1);
    if(extension != "txt" && extension != "exe" && extension != "dll")
        valid = false;

    return valid ? "Yes" : "No";
}