int count_digits = 0;
    bool valid = true;
    
    for (char c : file_name) {
        if (isdigit(c)) {
            count_digits++;
        } else if (c == '.') {
            if (count_digits > 3 || file_name.find('.') == 0 || file_name.find('.') == file_name.size() - 1) {
                valid = false;
                break;
            }
            string extension = file_name.substr(file_name.find('.') + 1);
            if (extension != "txt" && extension != "exe" && extension != "dll") {
                valid = false;
                break;
            }
        }
    }
    
    if (count_digits > 3) {
        valid = false;
    }
    
    return valid ? "Yes" : "No";
}