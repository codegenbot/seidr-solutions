int digitCount = 0;
    int dotCount = 0;
    int dotIndex = -1;
    
    for (int i = 0; i < file_name.size(); i++) {
        if (isdigit(file_name[i])) {
            digitCount++;
            if (digitCount > 3) {
                return "No";
            }
        }
        else if (file_name[i] == '.') {
            dotCount++;
            dotIndex = i;
        }
    }
    
    if (digitCount > 3 || dotCount != 1 || dotIndex == 0 || dotIndex == file_name.size() - 1) {
        return "No";
    }
    
    string prefix = file_name.substr(0, dotIndex);
    string suffix = file_name.substr(dotIndex + 1);
    
    if (prefix.empty() || !isalpha(prefix[0]) || (suffix != "txt" && suffix != "exe" && suffix != "dll")) {
        return "No";
    }
    
    return "Yes";
}