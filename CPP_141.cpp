#include <cctype>

string file_name_check(string file_name) {
    int dot_count = 0;
    int digit_count = 0;
    bool has_dot = false;

    for (char c : file_name) {
        if (isdigit(c)) {
            digit_count++;
        } else if (isalpha(c) || c == '.') {
            if (c == '.') {
                has_dot = true;
                dot_count++;
            }
        }
    }

    if (dot_count > 1 || digit_count > 3) {
        return "No";
    }

    size_t found = file_name.find('.');
    string extension = file_name.substr(found + 1);

    vector<string> valid_extensions = {"txt", "exe", "dll"};
    if (find(valid_extensions.begin(), valid_extensions.end(), extension) == valid_extensions.end()) {
        return "No";
    }

    size_t start = file_name.find('.');
    if (start == string::npos) {
        return "Yes";
    }

    for (char c : file_name.substr(0, start)) {
        if (!isalpha(c) && c != '.') {
            return "No";
        }
    }

    return "Yes";
}