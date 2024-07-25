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
    size_t dot_pos = file_name.find('.');
    if (dot_pos == string::npos || dot_pos + 4 > file_name.size()) {
        return "No";
    }

    string before_dot = file_name.substr(0, dot_pos);
    string after_dot = file_name.substr(dot_pos + 1);

    if (!before_dot.empty() && isalpha(before_dot[0])) {
        if (count_digits(before_dot) > 3) {
            return "No";
        }
    } else {
        return "No";
    }

    vector<string> valid_extensions = {"txt", "exe", "dll"};
    if (find(valid_extensions.begin(), valid_extensions.end(), after_dot) == valid_extensions.end()) {
        return "No";
    }

    return "Yes";
}