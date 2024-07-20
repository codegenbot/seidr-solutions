string file_name_check(string file_name){
    int dot_position = file_name.find('.');
    if (dot_position == -1) {
        return "No";
    }
    string before_dot = file_name.substr(0, dot_position);
    string after_dot = file_name.substr(dot_position + 1);
    
    bool valid_before = true;
    for (char c : before_dot) {
        if (!isalpha(c)) {
            valid_before = false;
            break;
        }
    }
    
    int digit_count = 0;
    for (char c : after_dot) {
        if (isdigit(c)) {
            digit_count++;
            if (digit_count > 3) {
                return "No";
            }
        } else if (c != '.' && c != 't' && c != 'x' && c != 'd' && c != 'l') {
            return "No";
        }
    }
    
    if (!valid_before || after_dot.find('.') != string::npos) {
        return "No";
    }
    
    return "Yes";
}