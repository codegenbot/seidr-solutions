int count_digits(const string& str) {
    int count = 0;
    for (char c : str) {
        if (isdigit(c)) {
            count++;
        }
    }
    return count;
}

bool valid_file_name(const string& file_name) {
    int digit_count = count_digits(file_name);
    size_t dot_pos = file_name.find('.');
    if (dot_pos == string::npos || digit_count > 3) {
        return false;
    }
    string before_dot = file_name.substr(0, dot_pos);
    string after_dot = file_name.substr(dot_pos + 1);
    if (before_dot.empty() || !isalpha(before_dot[0])) {
        return false;
    }
    vector<string> valid_extensions = {"txt", "exe", "dll"};
    if (find(valid_extensions.begin(), valid_extensions.end(), after_dot) == valid_extensions.end()) {
        return false;
    }
    return true;
}

string file_name_check(string file_name) {
    if (valid_file_name(file_name)) {
        return "Yes";
    } else {
        return "No";
    }
}