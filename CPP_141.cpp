string file_name_check(string file_name){
    int digit_count = 0;
    bool found_dot = false;
    for(int i=0; i<file_name.length(); i++){
        char c = file_name[i];
        if(isdigit(c)){
            digit_count++;
            if(digit_count > 3)
                return "No";
        }else if(c == '.'){
            found_dot = true;
        }else if(found_dot && (c != 't' || i+4 >= file_name.length() || file_name.substr(i,4)!="txt" &&
                                 c != 'x' || i+3 >= file_name.length() || file_name.substr(i,3)!="exe" &&
                                 c != 'd' || i+3 >= file_name.length() || file_name.substr(i,3)!="dll"))
            return "No";
    }
    if(digit_count > 0 || !found_dot)
        return "No";
    return "Yes";
}