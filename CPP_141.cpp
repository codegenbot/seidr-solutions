string file_name_check(string file_name){
    int dot_pos = file_name.find(".");
    if(dot_pos == -1 || dot_pos == 0 || dot_pos == file_name.length()-1){
        return "No";
    }
    string file_name_before_dot = file_name.substr(0, dot_pos);
    string file_extension = file_name.substr(dot_pos+1);
    
    if(file_name_before_dot.length() == 0 || !isalpha(file_name_before_dot[0])){
        return "No";
    }
    
    int digit_count = 0;
    for(char c : file_name_before_dot){
        if(isdigit(c)){
            digit_count++;
        }
    }
    if(digit_count > 3){
        return "No";
    }
    
    if(file_extension != "txt" && file_extension != "exe" && file_extension != "dll"){
        return "No";
    }
    
    return "Yes";
}