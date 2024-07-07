string file_name_check(string file_name) {
    int digit_count = 0;
    int dot_count = 0;
    bool valid_dot = false;

    for (int i = 0; i < file_name.length(); i++) {
        if (isdigit(file_name[i])) {
            digit_count++;
            if (digit_count > 3) return "No";
        } else if (file_name[i] == '.') {
            dot_count++;
            if (dot_count > 1) return "No";
            valid_dot = true;
        } else if (!valid_dot && !isalpha(file_name[i])) {
            return "No";
        }
    }

    string extension = file_name.substr(file_name.find('.') + 1);
    if (extension != "txt" && extension != "exe" && extension != "dll")
        return "No";

    return "Yes";
}