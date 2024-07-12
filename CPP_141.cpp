int count_digits(const string& str) {
    int count = 0;
    for (char c : str) {
        if (isdigit(c)) {
            count++;
        }
    }
    return count;
}

string file_name_check(string file_name) {
    if (file_name.find('.') == string::npos) {
        return "No";
    }

    size_t dot_pos = file_name.find('.');
    string before_dot = file_name.substr(0, dot_pos);
    string after_dot = file_name.substr(dot_pos + 1);

    if (!all_of(before_dot.begin(), before_dot.end(), ::isalpha)) {
        return "No";
    }

    if (count_digits(file_name) > 3 || count_digits(after_dot) > 0) {
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