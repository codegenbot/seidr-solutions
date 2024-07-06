int count_digits(const string& file_name) {
    int count = 0;
    for (char c : file_name) {
        if (isdigit(c)) {
            count++;
        }
    }
    return count;
}

bool is_valid_substring(const string& substring) {
    if (substring.empty()) {
        return false;
    }
    if (!isalpha(substring[0])) {
        return false;
    }
    return true;
}

string file_name_check(string file_name) {
    int digit_count = count_digits(file_name);
    if (digit_count > 3) {
        return "No";
    }
    
    size_t dot_pos = file_name.find('.');
    if (dot_pos == string::npos || is_valid_substring(file_name.substr(0, dot_pos)) ||
        !is_valid_extension(file_name.substr(dot_pos + 1))) {
        return "No";
    }
    
    return "Yes";
}

bool is_valid_extension(const string& extension) {
    vector<string> valid_extensions = {"txt", "exe", "dll"};
    for (const string& ext : valid_extensions) {
        if (ext == extension) {
            return true;
        }
    }
    return false;
}