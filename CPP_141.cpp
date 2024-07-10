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
    if (file_name.find('.') == string::npos || file_name.find('.') > 1) {
        return "No";
    }

    size_t dot_pos = file_name.find('.');
    string before_dot = file_name.substr(0, dot_pos);
    string after_dot = file_name.substr(dot_pos + 1);

    if (count_digits(before_dot) > 0 || count_digits(after_dot) > 3) {
        return "No";
    }

    if (!isalpha(before_dot[0]) && !isalpha(before_dot[0])) {
        return "No";
    }

    string extensions[] = {"txt", "exe", "dll"};
    for (const auto& ext : extensions) {
        if (after_dot == ext) {
            return "Yes";
        }
    }

    return "No";
}