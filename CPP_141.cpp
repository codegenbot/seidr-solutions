string file_name_check(string file_name) {
    int dot_count = 0;
    int digit_count = 0;
    bool valid = true;
    
    for (char c : file_name) {
        if (c == '.') {
            dot_count++;
            if (dot_count > 1) {
                valid = false;
                break;
            }
        } else if (isdigit(c)) {
            digit_count++;
            if (digit_count > 3) {
                valid = false;
                break;
            }
        } else if (!isalpha(c) && c != '.') {
            valid = false;
            break;
        }
    }
    
    string extension = "";
    for (int i = file_name.length() - 1; i > 0; i--) {
        if (file_name[i] == '.') {
            break;
        } else {
            extension += file_name[i];
        }
    }
    
    if (!valid || extension != "txt" && extension != "exe" && extension != "dll") {
        return "No";
    } else {
        return "Yes";
    }
}