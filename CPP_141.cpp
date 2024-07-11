int count_digits(const string& s) {
    int count = 0;
    for (char c : s) {
        if (isdigit(c)) {
            count++;
        }
    }
    return count;
}

string file_name_check(string file_name) {
    int digit_count = count_digits(file_name);
    bool has_dot = false;
    string before_dot, after_dot;

    size_t dot_pos = file_name.find('.');
    if (dot_pos != string::npos) {
        before_dot = file_name.substr(0, dot_pos);
        after_dot = file_name.substr(dot_pos + 1);
        has_dot = true;
    }

    if (!has_dot || before_dot.empty() || !isalpha(before_dot[0])) {
        return "No";
    }
    if (digit_count > 3) {
        return "No";
    }
    if (!(after_dot == "txt" || after_dot == "exe" || after_dot == "dll")) {
        return "No";
    }

    return "Yes";
}