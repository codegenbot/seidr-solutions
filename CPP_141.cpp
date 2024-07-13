Here is the completed code:

string file_name_check(string file_name) {
    int digit_count = 0;
    bool found_dot = false;

    for (char c : file_name) {
        if (isdigit(c)) {
            digit_count++;
            if (digit_count > 3) return "No";
        } else if (c == '.') {
            found_dot = true;
        }
    }

    if (!found_dot || !file_name.empty()) return "No";

    size_t dot_pos = file_name.find('.');
    string before_dot = file_name.substr(0, dot_pos);
    string after_dot = file_name.substr(dot_pos + 1);

    if (!isalpha(before_dot[0])) return "No";
    if (after_dot != "txt" && after_dot != "exe" && after_dot != "dll") return "No";

    return "Yes";
}