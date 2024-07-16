int num_digits = 0;
    int dot_index = -1;
    for (int i = 0; i < file_name.size(); ++i) {
        if (file_name[i] >= '0' && file_name[i] <= '9') {
            num_digits++;
        } else if (file_name[i] == '.') {
            if (dot_index != -1) {
                return "No";
            }
            dot_index = i;
        }
    }
    
    if (num_digits > 3 || dot_index == -1 || dot_index == 0 || dot_index == file_name.size() - 1) {
        return "No";
    }
    
    string prefix = file_name.substr(0, dot_index);
    string suffix = file_name.substr(dot_index + 1);
    
    if (!(isalpha(prefix[0]) && (suffix == "txt" || suffix == "exe" || suffix == "dll"))) {
        return "No";
    }
    
    return "Yes";
}