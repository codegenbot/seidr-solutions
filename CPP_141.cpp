int digits = 0;
    int dot = 0;
    int dotIndex = -1;
    
    for (int i = 0; i < file_name.size(); ++i) {
        if (isdigit(file_name[i])) {
            digits++;
        }
        else if (file_name[i] == '.') {
            dot++;
            dotIndex = i;
        }
    }
    
    if (digits > 3 || dot != 1 || dotIndex == 0 || dotIndex == file_name.size() - 1) {
        return "No";
    }
    
    string extension = file_name.substr(dotIndex + 1);
    
    if (extension != "txt" && extension != "exe" && extension != "dll") {
        return "No";
    }
    
    return "Yes";
}