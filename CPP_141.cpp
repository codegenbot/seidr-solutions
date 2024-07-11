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
    size_t dot_pos = file_name.find('.');
    if (dot_pos == string::npos || dot_pos + 1 >= file_name.size()) {
        return "No";
    }

    string prefix = file_name.substr(0, dot_pos);
    string suffix = file_name.substr(dot_pos + 1);

    if (!isalpha(prefix[0]) || !isalnum(prefix.substr(1))) {
        return "No";
    }

    if (count_digits(file_name) > 3) {
        return "No";
    }

    vector<string> valid_suffixes = {"txt", "exe", "dll"};
    if (find(valid_suffixes.begin(), valid_suffixes.end(), suffix) == valid_suffixes.end()) {
        return "No";
    }

    return "Yes";
}