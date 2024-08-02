int count_digits(const string &file_name) {
    int count = 0;
    for (char c : file_name) {
        if (isdigit(c)) {
            count++;
        }
    }
    return count;
}

bool check_extension(const string &file_name) {
    size_t pos = file_name.find('.');
    if (pos == string::npos) {
        return false;
    }
    string extension = file_name.substr(pos + 1);
    vector<string> valid_extensions = {"txt", "exe", "dll"};
    return find(valid_extensions.begin(), valid_extensions.end(), extension) != valid_extensions.end();
}

string file_name_check(string file_name) {
    if (count_digits(file_name) > 3) {
        return "No";
    }
    size_t pos = file_name.find('.');
    if (pos == string::npos || file_name.substr(0, pos).empty() ||
        !isalpha(file_name[0])) {
        return "No";
    }
    if (!check_extension(file_name)) {
        return "No";
    }
    return "Yes";
}