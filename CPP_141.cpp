string file_name_check(string file_name){
    int digit_count = 0;
    bool has_dot = false;
    string before_dot;

    for(int i = 0; i < file_name.length(); i++){
        char c = file_name[i];
        if(c >= '0' && c <= '9'){
            digit_count++;
        } else if(c == '.'){
            has_dot = true;
        } else {
            if(i > 0){
                before_dot = file_name.substr(0, i);
            }
        }
    }

    if(digit_count > 3 || !has_dot || before_dot.empty() || 
       (before_dot[0] < 'a' && before_dot[0] < 'A') ||
       (!find(file_name.begin(), file_name.end(), '.') + 1 == file_name.length())){
        return "No";
    } else {
        string after_dot = file_name.substr(file_name.find('.') + 1);
        if(after_dot != "txt" && after_dot != "exe" && after_dot != "dll"){
            return "No";
        }
    }

    return "Yes";
}