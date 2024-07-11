int digitCount = 0;
    int dotCount = 0;
    int dotPosition = -1;
    
    for (int i = 0; i < file_name.size(); i++) {
        if (file_name[i] >= '0' && file_name[i] <= '9') {
            digitCount++;
        } else if (file_name[i] == '.') {
            dotCount++;
            dotPosition = i;
        }
    }
    
    if (digitCount > 3 || dotCount != 1 || dotPosition == 0 || dotPosition == file_name.size() - 1) {
        return "No";
    }
    
    string extension = file_name.substr(dotPosition + 1);
    if (extension != "txt" && extension != "exe" && extension != "dll") {
        return "No";
    }
    
    return "Yes";
}