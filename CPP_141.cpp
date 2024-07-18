int digitCount = 0;
    bool hasDot = false;
    bool validExt = false;
    
    for (char c : file_name) {
        if (c >= '0' && c <= '9') {
            digitCount++;
        } else if (c == '.') {
            hasDot = true;
        }
    }
    
    if (file_name.find('.') != string::npos) {
        string ext = file_name.substr(file_name.find('.') + 1);
        if (ext == "txt" || ext == "exe" || ext == "dll") {
            validExt = true;
        }
    }
    
    if (digitCount <= 3 && hasDot && validExt && isalpha(file_name[0])) {
        return "Yes";
    }
    
    return "No";
}