string file_name_check(string file_name) {
    int digit_count = 0;
    bool dot_found = false;
    string before_dot;

    for (int i = 0; i < file_name.length(); i++) {
        if (isdigit(file_name[i])) {
            digit_count++;
            if (digit_count > 3)
                return "No";
        } else if (file_name[i] == '.') {
            dot_found = true;
            before_dot = file_name.substr(0, i);
        }
    }

    if (!dot_found || before_dot.empty() || !isalpha(before_dot[0]))
        return "No";

    string after_dot = file_name.substr(file_name.find('.') + 1);
    if (after_dot != "txt" && after_dot != "exe" && after_dot != "dll")
        return "No";

    return "Yes";
}