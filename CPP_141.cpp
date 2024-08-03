int count_digits(const string& s) {
    int count = 0;
    for (char c : s) {
        if (isdigit(c)) {
            count++;
        }
    }
    return count;
}

bool valid_file_name(string file_name) {
    size_t dot_pos = file_name.find('.');
    if (dot_pos == string::npos || dot_pos > file_name.size() - 4) {
        return false;
    }
    string before_dot = file_name.substr(0, dot_pos);
    string after_dot = file_name.substr(dot_pos + 1);

    if (!all_of(before_dot.begin(), before_dot.end(), ::isalpha)) {
        return false;
    }

    vector<string> valid_extensions {"txt", "exe", "dll"};
    if (find(valid_extensions.begin(), valid_extensions.end(), after_dot) == valid_extensions.end()) {
        return false;
    }

    int digit_count = count_digits(file_name);
    return digit_count <= 3;
}

string file_name_check(string file_name) {
    return valid_file_name(file_name) ? "Yes" : "No";
}