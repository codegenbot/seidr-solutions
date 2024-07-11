string file_name_check(string file_name) {
    int digit_count = 0;
    int dot_count = 0;

    for (int i = 0; i < file_name.length(); i++) {
        if (isdigit(file_name[i])) {
            digit_count++;
            if (digit_count > 3)
                return "No";
        } else if (file_name[i] == '.') {
            dot_count++;
            if (dot_count > 1)
                return "No";
        }
    }

    int start_index = 0;
    while (!isalpha(file_name[start_index]))
        start_index++;

    string before_dot = file_name.substr(0, start_index);
    string after_dot = file_name.substr(start_index + 1);

    if (after_dot != "txt" && after_dot != "exe" && after_dot != "dll")
        return "No";

    return "Yes";
}