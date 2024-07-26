int digits = 0;
    int dots = 0;
    int dotPos = -1;
    
    for (int i = 0; i < file_name.length(); ++i) {
        if (file_name[i] >= '0' && file_name[i] <= '9') {
            digits++;
        } else if (file_name[i] == '.') {
            dots++;
            dotPos = i;
        }
    }
    
    if (digits > 3 || dots != 1 || dotPos == 0 || dotPos == file_name.length() - 1) {
        return "No";
    }
    
    string extension = file_name.substr(dotPos + 1);
    if (extension != "txt" && extension != "exe" && extension != "dll") {
        return "No";
    }
    
    if ((file_name[0] < 'a' || file_name[0] > 'z') && (file_name[0] < 'A' || file_name[0] > 'Z')) {
        return "No";
    }
    
    return "Yes";
}