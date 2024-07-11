Here is the completed code:

string file_name_check(string file_name){
    bool has_dot = false;
    int digit_count = 0;
    char prev_char = '\0';
    
    for(char c : file_name){
        if(c == '.'){
            has_dot = true;
        }else if(isdigit(c)){
            digit_count++;
        }else{
            if(!isalpha(c) && prev_char != '.'){
                return "No";
            }
        }
        prev_char = c;
    }
    
    if(digit_count > 3 || !has_dot){
        return "No";
    }
    
    size_t dot_pos = file_name.find('.');
    string ext = file_name.substr(dot_pos + 1);
    if(ext != "txt" && ext != "exe" && ext != "dll"){
        return "No";
    }
    
    return "Yes";
}