string file_name_check(string file_name){
    int dot_count = 0, digit_count = 0;
    bool valid = true;

    for(char c : file_name){
        if(c == '.'){
            dot_count++;
            if(dot_count > 1) valid = false; // more than one dot
        }else if(isdigit(c)){
            digit_count++;
            if(digit_count > 3) valid = false; // more than three digits
        }else if(!isalpha(c)) {
            valid = false;
        }
    }

    string extension = file_name.substr(file_name.find('.') + 1);
    if(extension != "txt" && extension != "exe" && extension != "dll") valid = false;

    return valid ? "Yes" : "No";
}