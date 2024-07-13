string file_name_check(string file_name){
    int digit_count = 0;
    bool found_dot = false;
    for(int i=0; i<file_name.length(); i++){
        char c = file_name[i];
        if(c >= '0' && c <= '9'){
            digit_count++;
            if(digit_count > 3)
                return "No";
        }
        else if(c == '.')
            found_dot = true;
        else if(!found_dot && !isalpha(c))
            return "No";
    }
    if(found_dot){
        int dot_index = file_name.find('.');
        string before_dot = file_name.substr(0, dot_index);
        string after_dot = file_name.substr(dot_index+1);
        if(before_dot.empty() || after_dot.empty())
            return "No";
        if(after_dot != "txt" && after_dot != "exe" && after_dot != "dll")
            return "No";
    }
    else
        return "No";
    return "Yes";
}