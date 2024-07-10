Here is the completed code:

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

    if (!has_dot) return "No";

    size_t pos = file_name.find('.');
    string before_dot = file_name.substr(0, pos);
    string after_dot = file_name.substr(pos + 1);

    if (before_dot.empty()) return "No";
    if (!isalpha(before_dot[0])) return "No";

    vector<string> allowed_extensions = {"txt", "exe", "dll"};
    if (find(allowed_extensions.begin(), allowed_extensions.end(), after_dot) == allowed_extensions.end())
        return "No";

    return "Yes";
}