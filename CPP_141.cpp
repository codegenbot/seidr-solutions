int count_digits(const string& file_name) {
    int count = 0;
    for (char c : file_name) {
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
    if (dot_pos == string::npos || dot_pos == 0) {
        return "No";
    }

    string before_dot = file_name.substr(0, dot_pos);
    if (!isalpha(before_dot[0])) {
        return "No";
    }

    string after_dot = file_name.substr(dot_pos + 1);
    vector<string> valid_extensions = {"txt", "exe", "dll"};
    if (find(valid_extensions.begin(), valid_extensions.end(), after_dot) == valid_extensions.end()) {
        return "No";
    }

    return "Yes";
}