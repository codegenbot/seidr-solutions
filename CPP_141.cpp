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
    int dot_count = 0;
    bool found_dot = false;

    for (char c : file_name) {
        if (c == '.') {
            dot_count++;
            found_dot = true;
        } else if (!found_dot && !isalpha(c)) {
            return "No";
        }
    }

    if (dot_count != 1 || count_digits(file_name) > 3) {
        return "No";
    }

    size_t pos = file_name.find('.');
    string ext = file_name.substr(pos + 1);

    vector<string> valid_extensions = {"txt", "exe", "dll"};
    if (find(valid_extensions.begin(), valid_extensions.end(), ext) == valid_extensions.end()) {
        return "No";
    }

    return "Yes";
}