string file_name_check(string file_name) {
    int digit_count = 0;
    int dot_count = 0;

    for (char c : file_name) {
        if (isdigit(c)) {
            digit_count++;
        } else if (c == '.') {
            dot_count++;
        }
    }

    string before_dot = "";
    string after_dot = "";

    size_t pos = file_name.find('.');
    if (pos != string::npos) {
        before_dot = file_name.substr(0, pos);
        after_dot = file_name.substr(pos + 1);

        if (before_dot.empty() || !isalpha(before_dot[0])) {
            return "No";
        }

        vector<string> allowed_extensions = {"txt", "exe", "dll"};
        if (find(allowed_extensions.begin(), allowed_extensions.end(), after_dot) == allowed_extensions.end()) {
            return "No";
        }
    } else {
        before_dot = file_name;
    }

    if (digit_count > 3 || dot_count != 1) {
        return "No";
    }

    return "Yes";
}