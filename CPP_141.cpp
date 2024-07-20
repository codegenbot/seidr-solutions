string file_name_check(string file_name) {
    int dot_count = 0;
    bool has_dot = false;
    bool starts_with_letter = true;
    int digit_count = 0;

    for (char c : file_name) {
        if (c == '.') {
            dot_count++;
            has_dot = true;
        } else if (isdigit(c)) {
            digit_count++;
        } else if (!isalpha(c)) {
            starts_with_letter = false;
        }
    }

    if (dot_count > 1 || !has_dot) return "No";
    if (digit_count > 3) return "No";
    if (!starts_with_letter) return "No";

    string extension = file_name.substr(file_name.find('.') + 1);
    if (extension != "txt" && extension != "exe" && extension != "dll") return "No";

    return "Yes";
}