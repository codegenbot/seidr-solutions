string file_name_check(string file_name) {
    int digit_count = 0;
    bool has_dot = false;
    string before_dot;

    for (char c : file_name) {
        if (isdigit(c)) {
            digit_count++;
        } else if (c == '.') {
            has_dot = true;
        } else if (!has_dot) {
            before_dot += c;
        }
    }

    if (digit_count > 3 || !before_dot.size() || !isalpha(before_dot[0])) {
        return "No";
    }

    string after_dot = file_name.substr(file_name.find('.') + 1);
    vector<string> valid_extensions = {"txt", "exe", "dll"};
    if (find(valid_extensions.begin(), valid_extensions.end(), after_dot) == valid_extensions.end()) {
        return "No";
    }

    return "Yes";
}