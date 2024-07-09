int digits = 0;
    for (char c : file_name) {
        if (isdigit(c)) digits++;
    }
    
    size_t dot_pos = file_name.find('.');
    if (dot_pos == string::npos || dot_pos == 0 || dot_pos == file_name.size() - 1) {
        return "No";
    }
    
    string extension = file_name.substr(dot_pos + 1);
    if (extension != "txt" && extension != "exe" && extension != "dll") {
        return "No";
    }
    
    if (digits > 3) {
        return "No";
    }
    
    if (!isalpha(file_name[0])) {
        return "No";
    }
    
    return "Yes";
}