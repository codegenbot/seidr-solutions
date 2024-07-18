int digitCount = 0;
    bool valid = true;
    
    for (char c : file_name) {
        if (isdigit(c)) {
            digitCount++;
        } else if (c == '.') {
            if (digitCount > 3 || digitCount == 0) {
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
    
    if (digitCount > 3 || digitCount == 0 || !valid) {
        return "No";
    }
    
    return "Yes";
}