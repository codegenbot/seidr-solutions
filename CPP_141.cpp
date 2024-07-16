int digitCount = 0;
    bool dotFound = false;
    int dotIndex = -1;
    
    for (int i = 0; i < file_name.length(); i++) {
        if (file_name[i] >= '0' && file_name[i] <= '9') {
            digitCount++;
        } else if (file_name[i] == '.') {
            if (dotFound) {
                return "No";
            }
            dotFound = true;
            dotIndex = i;
        }
    }
    
    if (digitCount > 3 || !dotFound || dotIndex == 0 || dotIndex == file_name.length() - 1) {
        return "No";
    }
    
    string extension = file_name.substr(dotIndex + 1);
    if (extension != "txt" && extension != "exe" && extension != "dll") {
        return "No";
    }
    
    return "Yes";
}