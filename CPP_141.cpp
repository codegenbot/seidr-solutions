int num_digits = 0;
    for (char c : file_name) {
        if (c >= '0' && c <= '9') {
            num_digits++;
        }
    }
    
    size_t dot_pos = file_name.find('.');
    if (num_digits <= 3 && dot_pos != string::npos && dot_pos > 0 && dot_pos < file_name.size() - 1) {
        string extension = file_name.substr(dot_pos + 1);
        if (extension == "txt" || extension == "exe" || extension == "dll") {
            if ((file_name[0] >= 'a' && file_name[0] <= 'z') || (file_name[0] >= 'A' && file_name[0] <= 'Z')) {
                return "Yes";
            }
        }
    }
    
    return "No";
}