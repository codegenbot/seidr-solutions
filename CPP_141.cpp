int digit_count = 0;
    int dot_count = 0;
    int dot_position = -1;
    
    for (int i = 0; i < file_name.length(); ++i) {
        if (isdigit(file_name[i])) {
            digit_count++;
        } else if (file_name[i] == '.') {
            dot_count++;
            dot_position = i;
        }
    }
    
    if (digit_count > 3 || dot_count != 1 || dot_position == 0 || dot_position == file_name.length() - 1) {
        return "No";
    }
    
    string extension = file_name.substr(dot_position + 1);
    
    if (extension != "txt" && extension != "exe" && extension != "dll") {
        return "No";
    }
    
    return "Yes";
}