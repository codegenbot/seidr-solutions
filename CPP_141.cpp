int count_digits = 0;
    int dot_pos = file_name.find(".");
    if (dot_pos == string::npos || dot_pos == 0 || dot_pos == file_name.size() - 1) {
        return "No";
    }
    
    for (char c : file_name) {
        if (isdigit(c)) {
            count_digits++;
        }
    }
    
    if (count_digits > 3) {
        return "No";
    }
    
    string extension = file_name.substr(dot_pos + 1);
    if (extension != "txt" && extension != "exe" && extension != "dll") {
        return "No";
    }
    
    if (!isalpha(file_name[0])) {
        return "No";
    }
    
    return "Yes";
}