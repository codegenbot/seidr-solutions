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
    if (digit_count > 3 || !file_name.empty() && !isalpha(file_name[0])) {
        return "No";
    }

    size_t dot_pos = file_name.find('.');
    if (dot_pos == string::npos || dot_pos == 0 || file_name.size() - 1 != dot_pos) {
        return "No";
    }

    string extension = file_name.substr(dot_pos + 1);
    vector<string> valid_extensions = {"txt", "exe", "dll"};
    if (find(valid_extensions.begin(), valid_extensions.end(), extension) == valid_extensions.end()) {
        return "No";
    }

    return "Yes";
}