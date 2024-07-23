std::string file_name_check(std::string file_name){
    int digit_count = 0;
    bool has_dot = false;
    for(int i=0; i<file_name.length(); i++){
        char c = file_name[i];
        if(file_name.find_first_of("0123456789") != std::string::npos){
            digit_count++;
        } else if(c == '.'){
            has_dot = true;
        } else if(!has_dot && !isalpha(c)){
            return "No";
        }
    }
    if(digit_count > 3 || !has_dot){
        return "No";
    }
    std::string extension = file_name.substr(file_name.find('.') + 1);
    if(extension != "txt" && extension != "exe" && extension != "dll"){
        return "No";
    }
    return digit_count <= 3 && has_dot ? "Yes" : "No";
}