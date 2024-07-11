string file_name_check(string file_name) {
    int dot_count = 0, digit_count = 0, letter_count = 0;
    string pre_dot, post_dot;

    for (int i = 0; i < file_name.length(); i++) {
        if (file_name[i] == '.') {
            dot_count++;
            if (dot_count > 1) return "No";
            if (i != file_name.length() - 1) {
                pre_dot = file_name.substr(0, i);
                post_dot = file_name.substr(i + 1);
            }
        } else if (isdigit(file_name[i])) {
            digit_count++;
            if (digit_count > 3) return "No";
        } else if (isalpha(file_name[i])) {
            letter_count++;
        }
    }

    if ((pre_dot.empty() || !isalpha(pre_dot[0])) && (post_dot != "txt" && post_dot != "exe" && post_dot != "dll")) return "No";

    return "Yes";
}