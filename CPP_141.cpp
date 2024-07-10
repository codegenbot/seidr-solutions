int digits = 0;
    int dots = 0;
    int dotIndex = -1;
    
    for (int i = 0; i < file_name.size(); ++i) {
        if (isdigit(file_name[i])) {
            digits++;
        } else if (file_name[i] == '.') {
            dots++;
            dotIndex = i;
        }
    }
    
    if (digits <= 3 && dots == 1 && dotIndex > 0 && dotIndex < file_name.size() - 1) {
        string extension = file_name.substr(dotIndex + 1);
        if (extension == "txt" || extension == "exe" || extension == "dll") {
            if (isalpha(file_name[0])) {
                return "Yes";
            }
        }
    }
    
    return "No";
}