int dot_pos = file_name.find(".");
    if (dot_pos == string::npos || dot_pos == 0 || dot_pos == file_name.size() - 1) {
        return "No";
    }
    
    string file_name_before_dot = file_name.substr(0, dot_pos);
    string file_extension = file_name.substr(dot_pos + 1);
    
    if (file_name_before_dot.empty() || !isalpha(file_name_before_dot[0])) {
        return "No";
    }
    
    int digit_count = 0;
    for (char c : file_name) {
        if (isdigit(c)) {
            digit_count++;
        }
    }
    
    if (digit_count > 3 || file_extension != "txt" && file_extension != "exe" && file_extension != "dll") {
        return "No";
    }
    
    return "Yes";
}