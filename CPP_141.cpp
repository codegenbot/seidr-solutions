int digits = 0;
    int dotIndex = -1;
    
    for (int i = 0; i < file_name.size(); ++i) {
        if (file_name[i] >= '0' && file_name[i] <= '9') {
            digits++;
            if (digits > 3) {
                return "No";
            }
        } else if (file_name[i] == '.') {
            if (dotIndex != -1) {
                return "No";
            }
            dotIndex = i;
        } else if (i == 0 && !(file_name[i] >= 'a' && file_name[i] <= 'z') && !(file_name[i] >= 'A' && file_name[i] <= 'Z')) {
            return "No";
        }
    }
    
    if (digits > 3 || dotIndex == -1 || dotIndex == 0 || dotIndex == file_name.size() - 1) {
        return "No";
    }
    
    string extension = file_name.substr(dotIndex + 1);
    if (extension != "txt" && extension != "exe" && extension != "dll") {
        return "No";
    }
    
    return "Yes";
}