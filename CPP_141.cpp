string file_name_check(string file_name) {
    int digit_count = 0;
    bool found_dot = false;

    for (char c : file_name) {
        if (c >= '0' && c <= '9') {
            digit_count++;
        } else if (c == '.') {
            found_dot = true;
        } else if (!found_dot) {
            return "No";
        }
    }

    if (digit_count > 3 || !found_dot) {
        return "No";
    }

    size_t dot_pos = file_name.find('.');
    string before_dot = file_name.substr(0, dot_pos);
    string after_dot = file_name.substr(dot_pos + 1);

    if (!before_dot.empty() && (after_dot != "txt" && after_dot != "exe" && after_dot != "dll")) {
        return "No";
    }

    return "Yes";
}