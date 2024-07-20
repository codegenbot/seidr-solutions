bool has_digits(const string& s) {
    for (char c : s) {
        if (isdigit(c)) return true;
    }
    return false;
}

string file_name_check(string file_name) {
    int dot_count = 0;
    bool starts_with_letter = false;

    for (int i = 0; i < file_name.length(); i++) {
        char c = file_name[i];
        if (c == '.') {
            dot_count++;
        } else if (!starts_with_letter && isalpha(c)) {
            starts_with_letter = true;
        } else if (isdigit(c) || has_digits(file_name.substr(i))) {
            return "No";
        }
    }

    if (dot_count != 1) return "No";
    int pos = file_name.find('.');
    string ext = file_name.substr(pos + 1);
    vector<string> valid_extensions = {"txt", "exe", "dll"};
    if (find(valid_extensions.begin(), valid_extensions.end(), ext) == valid_extensions.end()) {
        return "No";
    }

    return "Yes";
}