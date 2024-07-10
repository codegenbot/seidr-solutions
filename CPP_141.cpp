string file_name_check(string file_name){
    int dot_count = 0;
    bool has_dot = false;
    int digit_count = 0;
    
    for(int i=0; i<file_name.length(); i++){
        char c = file_name[i];
        
        if(c == '.'){
            dot_count++;
            has_dot = true;
        } else if(isdigit(c)){
            digit_count++;
        } else if(isalpha(c) || c == '_') {
            // Check the first character of the substring before the dot
            if(i == 0 && !isalpha(c)) return "No";
        }
    }
    
    if(dot_count > 1 || has_dot == false || digit_count > 3 || (file_name.length() - file_name.find('.')) < 4) {
        return "No";
    } else {
        string extension = file_name.substr(file_name.find('.') + 1);
        if(extension != "txt" && extension != "exe" && extension != "dll") {
            return "No";
        }
    }
    
    return "Yes";
}