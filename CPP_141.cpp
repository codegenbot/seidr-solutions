int num_digits = 0;
    int dot_count = 0;
    int dot_index = -1;
    
    for (int i = 0; i < file_name.length(); i++) {
        if (file_name[i] >= '0' && file_name[i] <= '9') {
            num_digits++;
        } else if (file_name[i] == '.') {
            dot_count++;
            dot_index = i;
        }
    }
    
    if (num_digits <= 3 && dot_count == 1 && dot_index > 0 && dot_index < file_name.length() - 1) {
        string extension = file_name.substr(dot_index + 1);
        if (extension == "txt" || extension == "exe" || extension == "dll") {
            if ((file_name[0] >= 'a' && file_name[0] <= 'z') || (file_name[0] >= 'A' && file_name[0] <= 'Z')) {
                return "Yes";
            }
        }
    }
    
    return "No";
}