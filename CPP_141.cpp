int count_digits(string s) {
    int count = 0;
    for (char c : s) {
        if (isdigit(c)) {
            count++;
        }
    }
    return count;
}

string file_name_check(string file_name) {
    bool valid = true;

    // Check if there are more than three digits
    int digit_count = count_digits(file_name);
    if (digit_count > 3) {
        valid = false;
    }

    // Check for exactly one dot
    int dot_count = 0;
    for (char c : file_name) {
        if (c == '.') {
            dot_count++;
        }
    }
    if (dot_count != 1) {
        valid = false;
    }

    // Check the substring before the dot
    string before_dot = "";
    int i = 0;
    while (i < file_name.size() && file_name[i] != '.') {
        before_dot += file_name[i];
        i++;
    }
    if (before_dot.empty()) {
        valid = false;
    } else {
        for (char c : before_dot) {
            if (!isalpha(c)) {
                valid = false;
                break;
            }
        }
    }

    // Check the substring after the dot
    string after_dot = "";
    i++;
    while (i < file_name.size()) {
        after_dot += file_name[i];
        i++;
    }
    vector<string> allowed_extensions = {"txt", "exe", "dll"};
    if (find(allowed_extensions.begin(), allowed_extensions.end(), after_dot) == allowed_extensions.end()) {
        valid = false;
    }

    return valid ? "Yes" : "No";
}