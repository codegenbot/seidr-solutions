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
    int digit_count = count_digits(file_name);
    size_t dot_pos = file_name.find('.');
    if (dot_pos == string::npos || digit_count > 3) {
        return "No";
    }
    if (digit_count > 0 && file_name[0] != '.' && !isalpha(file_name[0])) {
        return "No";
    }
    size_t ext_len = file_name.size() - dot_pos - 1;
    string extension = file_name.substr(dot_pos + 1);
    if (extension != "txt" && extension != "exe" && extension != "dll") {
        return "No";
    }
    return "Yes";
}