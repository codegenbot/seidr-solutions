```
int count_digits(const string& file_name) {
    int count = 0;
    for (char c : file_name) {
        if (isdigit(c)) {
            count++;
        }
        if (count > 3) {
            return 1; // more than three digits found
        }
    }
    return 0; // no more than three digits found
}

bool is_valid_pre_dot(const string& file_name) {
    int dot_index = file_name.find('.');
    if (dot_index == -1 || dot_index == 0) {
        return false; // dot not found or at the beginning
    }
    string pre_dot = file_name.substr(0, dot_index);
    for (char c : pre_dot) {
        if (!isalpha(c)) {
            return false; // does not start with a latin letter
        }
    }
    return true;
}

bool is_valid_post_dot(const string& file_name) {
    int dot_index = file_name.find('.');
    string post_dot = file_name.substr(dot_index + 1);
    vector<string> valid_extensions = {"txt", "exe", "dll"};
    for (const string& ext : valid_extensions) {
        if (post_dot == ext) {
            return true;
        }
    }
    return false; // not a valid extension
}

string file_name_check(string file_name) {
    int digit_count = count_digits(file_name);
    bool valid_pre_dot = is_valid_pre_dot(file_name);
    bool valid_post_dot = is_valid_post_dot(file_name);
    if (digit_count <= 3 && valid_pre_dot && valid_post_dot) {
        return "Yes";
    } else {
        return "No";
    }
}