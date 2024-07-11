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
    if (count_digits(file_name) > 3) {
        return "No";
    }

    size_t dot_pos = file_name.find('.');
    if (dot_pos == string::npos || dot_pos == 0 || dot_pos == file_name.size() - 1) {
        return "No";
    }

    string before_dot = file_name.substr(0, dot_pos);
    string after_dot = file_name.substr(dot_pos + 1);

    if (!before_dot.empty() && !isalpha(before_dot[0])) {
        return "No";
    }

    vector<string> allowed_extensions = {"txt", "exe", "dll"};
    if (find(allowed_extensions.begin(), allowed_extensions.end(), after_dot) == allowed_extensions.end()) {
        return "No";
    }

    return "Yes";
}