string file_name_check(string file_name){
    int digit_count = 0;
    bool has_dot = false;
    bool valid_start = true;
    string before_dot;

    for(int i=0; i<file_name.length(); i++){
        char c = file_name[i];
        if(c == '.'){
            has_dot = true;
            continue;
        }
        if(isdigit(c)){
            digit_count++;
            if(digit_count > 3)
                return "No";
        }else{
            valid_start &= isalpha(c);
            before_dot += c;
        }
    }

    if(!has_dot || !valid_start || before_dot.empty())
        return "No";

    string after_dot = file_name.substr(file_name.find('.')+1);
    if(after_dot != "txt" && after_dot != "exe" && after_dot != "dll")
        return "No";

    return "Yes";
}