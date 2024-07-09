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
    if (dot_pos == string::npos || file_name.substr(0, dot_pos).empty() ||
        !isalpha(file_name[0])) {
        return "No";
    }
    if (digit_count > 3) {
        return "No";
    }
    string ext = file_name.substr(dot_pos + 1);
    vector<string> valid_exts = {"txt", "exe", "dll"};
    if (find(valid_exts.begin(), valid_exts.end(), ext) == valid_exts.end()) {
        return "No";
    }
    return "Yes";
}