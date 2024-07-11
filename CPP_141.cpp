int digits_count = 0;
    bool dot_found = false;
    string before_dot = "";
    string after_dot = "";
    
    for (char c : file_name) {
        if (c >= '0' && c <= '9') {
            digits_count++;
        } else if (c == '.') {
            if (dot_found || before_dot.empty()) {
                return "No";
            }
            dot_found = true;
        } else if (dot_found) {
            after_dot += c;
        } else {
            before_dot += c;
        }
    }
    
    if (digits_count > 3 || !dot_found || before_dot.empty() || after_dot.empty()) {
        return "No";
    }
    
    if (after_dot != "txt" && after_dot != "exe" && after_dot != "dll") {
        return "No";
    }
    
    if ((before_dot[0] < 'a' || before_dot[0] > 'z') && (before_dot[0] < 'A' || before_dot[0] > 'Z')) {
        return "No";
    }
    
    return "Yes";
}