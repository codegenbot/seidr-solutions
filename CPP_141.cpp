Here is the completed code:

string file_name_check(string file_name){
    int digit_count = 0;
    bool has_dot = false;
    string prefix;

    for(int i = 0; i < file_name.length(); i++){
        char c = file_name[i];
        if(isdigit(c)){
            digit_count++;
        } else if(c == '.'){
            has_dot = true;
            prefix = file_name.substr(0, i);
        } else {
            if(i == 0 && !isalpha(c))
                return "No";
            if(has_dot)
                break;
        }
    }

    if(digit_count > 3 || !has_dot || (prefix.length() == 0) || (!isalpha(prefix[0])))
        return "No";

    string suffix = file_name.substr(file_name.find('.') + 1);
    string allowed_suffixes[] = {"txt", "exe", "dll"};
    bool is_allowed_suffix = false;
    for(auto s : allowed_suffixes){
        if(s == suffix)
            is_allowed_suffix = true;
    }

    return is_allowed_suffix ? "Yes" : "No";
}