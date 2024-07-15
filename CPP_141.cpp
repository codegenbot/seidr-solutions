int count_digits = 0;
    int dot_index = -1;
    
    for (int i = 0; i < file_name.length(); i++) {
        if (isdigit(file_name[i])) {
            count_digits++;
        } else if (file_name[i] == '.') {
            if (dot_index != -1) {
                return "No";
            }
            dot_index = i;
        }
    }

    if (count_digits > 3 || dot_index == -1 || dot_index == 0 || dot_index == file_name.length() - 1) {
        return "No";
    }

    string before_dot = file_name.substr(0, dot_index);
    string after_dot = file_name.substr(dot_index + 1);

    if (!isalpha(before_dot[0])) {
        return "No";
    }

    if (after_dot != "txt" && after_dot != "exe" && after_dot != "dll") {
        return "No";
    }

    return "Yes";
}