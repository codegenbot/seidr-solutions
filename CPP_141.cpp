int count_digits = 0;
    int dot_position = -1;
    
    for (int i = 0; i < file_name.size(); i++) {
        if (isdigit(file_name[i])) {
            count_digits++;
        } else if (file_name[i] == '.') {
            if (dot_position != -1) {
                return "No";
            }
            dot_position = i;
        }
    }
    
    if (count_digits > 3 || dot_position == -1 || dot_position == 0 || dot_position == file_name.size() - 1) {
        return "No";
    }
    
    string prefix = file_name.substr(0, dot_position);
    string suffix = file_name.substr(dot_position + 1);
    
    if (!isalpha(prefix[0])) {
        return "No";
    }
    
    if (suffix != "txt" && suffix != "exe" && suffix != "dll") {
        return "No";
    }
    
    return "Yes";
}