int digitCount = 0;
    bool dotFound = false;
    bool validPrefix = false;
    bool validExtension = false;
    
    for (char c : file_name) {
        if (isdigit(c)) {
            digitCount++;
        } else if (c == '.') {
            dotFound = true;
        } else if (isalpha(c) && !dotFound) {
            validPrefix = true;
        }
    }
    
    if (file_name.substr(file_name.find('.') + 1) == "txt" || file_name.substr(file_name.find('.') + 1) == "exe" || file_name.substr(file_name.find('.') + 1) == "dll") {
        validExtension = true;
    }
    
    if (digitCount <= 3 && dotFound && validPrefix && validExtension) {
        return "Yes";
    } else {
        return "No";
    }
}