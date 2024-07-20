string file_name_check(string file_name) {
    int digit_count = 0;
    bool has_dot = false;
    for (char c : file_name) {
        if (isdigit(c)) {
            digit_count++;
            if (digit_count > 3) return "No";
        } else if (c == '.') {
            has_dot = true;
        }
    }
    if (!has_dot || file_name.find('.') == string::npos) return "No";
    size_t dot_pos = file_name.find('.');
    if (dot_pos == string::npos) return "No";
    string before_dot = file_name.substr(0, dot_pos);
    string after_dot = file_name.substr(dot_pos + 1);
    if (!before_dot.size() || !isalpha(before_dot[0])) return "No";
    vector<string> valid_extensions = {"txt", "exe", "dll"};
    if (find(valid_extensions.begin(), valid_extensions.end(), after_dot) == valid_extensions.end()) return "No";
    return "Yes";
}