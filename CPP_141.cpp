std::string file_name_check(std::string file_name){
    int digit_count = 0;
    bool has_dot = false;
    std::string extension;
    for(int i=0; i<file_name.length(); i++){
        char c = file_name[i];
        if(c >= '0' && c <= '9'){
            digit_count++;
        } else if(c == '.'){
            has_dot = true;
            extension = file_name.substr(i+1);
            break;
        } else if(!isalpha(c)){
            return "No";
        }
    }
    if(extension != "txt" && extension != "exe" && extension != "dll" || digit_count > 3){
        return "No";
    }
    return "Yes";
}