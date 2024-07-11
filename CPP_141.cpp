string file_name_check(string file_name) {
    int digit_count = 0;
    bool found_dot = false;

    for (char c : file_name) {
        if (isdigit(c)) {
            digit_count++;
            if (digit_count > 3)
                return "No";
        } else if (c == '.') {
            found_dot = true;
        }
    }

    if (!found_dot || file_name.find('.') == string::npos)
        return "No";

    string before_dot = file_name.substr(0, file_name.find('.'));
    string after_dot = file_name.substr(file_name.find('.') + 1);

    if (before_dot.empty() || !isalpha(before_dot[0]))
        return "No";

    vector<string> allowed_extensions = {"txt", "exe", "dll"};
    if (find(allowed_extensions.begin(), allowed_extensions.end(), after_dot) == allowed_extensions.end())
        return "No";

    return "Yes";
}