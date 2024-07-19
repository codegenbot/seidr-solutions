int digits_count = 0;
    for (char c : file_name) {
        if (isdigit(c)) {
            digits_count++;
        }
    }
    
    size_t dot_pos = file_name.find('.');
    if (digits_count <= 3 && dot_pos != string::npos &&
        dot_pos > 0 && dot_pos < file_name.size() - 1) {
        string file_ext = file_name.substr(dot_pos + 1);
        if ((file_ext == "txt" || file_ext == "exe" || file_ext == "dll") && isalpha(file_name[0])) {
            return "Yes";
        }
    }
    
    return "No";
}