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
    bool has_dot = false;
    bool starts_with_letter = true;

    for (char c : file_name) {
        if (c == '.') {
            dot_count++;
            has_dot = true;
        } else if (!has_dot && !isalpha(c)) {
            starts_with_letter = false;
        }
    }

    int digit_count = count_digits(file_name);

    if (dot_count > 1 || dot_count == 0) {
        return "No";
    }
    if (starts_with_letter && has_dot && digit_count <= 3 && (file_name.substr(file_name.find('.') + 1).compare("txt") == 0 ||
            file_name.substr(file_name.find('.') + 1).compare("exe") == 0 || file_name.substr(file_name.find('.') + 1).compare("dll") == 0)) {
        return "Yes";
    }
    return "No";
}