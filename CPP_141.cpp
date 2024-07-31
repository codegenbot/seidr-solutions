int digits_count = 0;
    int dot_count = 0;
    string before_dot;
    string after_dot;
    
    for (char c : file_name) {
        if (c >= '0' && c <= '9') {
            digits_count++;
        } else if (c == '.') {
            dot_count++;
        } else if (dot_count == 0) {
            before_dot += c;
        } else if (dot_count == 1) {
            after_dot += c;
        }
    }
    
    if (digits_count > 3 || dot_count != 1 || before_dot.empty() || !isalpha(before_dot[0])) {
        return "No";
    }
    
    if (after_dot == "txt" || after_dot == "exe" || after_dot == "dll") {
        return "Yes";
    } else {
        return "No";
    }
}