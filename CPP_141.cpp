int count_digits(const string &s) {
    int count = 0;
    for (char c : s) {
        if (isdigit(c)) {
            count++;
        }
    }
    return count;
}

bool file_name_check(string file_name) {
    int digit_count = count_digits(file_name);
    if (digit_count > 3 || file_name.find('.') == string::npos || 
        (file_name.find('.') != string::npos && !file_name.substr(0, file_name.find('.')).match("^[a-zA-Z].*$")) || 
        (!string::npos == file_name.find(".txt") && !string::npos == file_name.find(".exe") && !string::npos == file_name.find(".dll"))) {
        return "No";
    }
    return "Yes";
}