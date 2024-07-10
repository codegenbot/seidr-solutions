Here is the completed code:

string file_name_check(string file_name){
    int digit_count = 0;
    bool found_dot = false;
    string prefix;
    for(int i=0; i<file_name.length(); i++){
        char c = file_name[i];
        if(isdigit(c)){
            digit_count++;
            if(digit_count > 3) return "No";
        } else if(c == '.'){
            found_dot = true;
            prefix = file_name.substr(0, i);
        } else if(found_dot && (c== 'a' || c== 'A')){
            string suffix = file_name.substr(i+1);
            if(suffix == "txt" || suffix == "exe" || suffix == "dll")
                return "Yes";
            else
                return "No";
        }
    }
    if(digit_count > 3) return "No";
    if(prefix.empty()) return "No";
    string suffix = file_name.substr(file_name.find('.'));
    if(suffix != "txt" && suffix != "exe" && suffix != "dll") return "No";
    return "Yes";