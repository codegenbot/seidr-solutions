int digit_counter = 0;
    for (char c : file_name) {
        if (isdigit(c)) {
            digit_counter++;
        }
    }
    
    size_t dot_pos = file_name.find('.');
    if (digit_counter > 3 || dot_pos == string::npos) {
        return "No";
    }
    
    string name_before_dot = file_name.substr(0, dot_pos);
    string extension = file_name.substr(dot_pos + 1);
    
    if (name_before_dot.empty() || !isalpha(name_before_dot[0])) {
        return "No";
    }
    
    if (extension != "txt" && extension != "exe" && extension != "dll") {
        return "No";
    }
    
    return "Yes";
}