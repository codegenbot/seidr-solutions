int count_digits = 0;
    int dot_position = -1;
    for (int i = 0; i < file_name.length(); i++) {
        if (file_name[i] >= '0' && file_name[i] <= '9') {
            count_digits++;
            if (count_digits > 3) {
                return "No";
            }
        }
        if (file_name[i] == '.') {
            if (dot_position != -1) {
                return "No";
            }
            dot_position = i;
        }
    }
    if (dot_position == -1 || dot_position == 0 || dot_position == file_name.length() - 1) {
        return "No";
    }
    string prefix = file_name.substr(0, dot_position);
    string postfix = file_name.substr(dot_position + 1);
    if (!(isalpha(prefix[0]))) {
        return "No";
    }
    if (postfix != "txt" && postfix != "exe" && postfix != "dll") {
        return "No";
    }
    return "Yes";
}