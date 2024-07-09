int count_digits(string str) {
    int count = 0;
    for (char c : str) {
        if (c >= '0' && c <= '9') {
            count++;
        }
    }
    return count;
}

bool check_extension(string file_name) {
    size_t dot_pos = file_name.find('.');
    string extension = file_name.substr(dot_pos + 1);
    vector<string> valid_extensions = {"txt", "exe", "dll"};
    return (find(valid_extensions.begin(), valid_extensions.end(), extension) != valid_extensions.end());
}

bool check_filename(string file_name) {
    size_t dot_pos = file_name.find('.');
    if (dot_pos == string::npos || count_digits(file_name.substr(0, dot_pos)) > 1) {
        return false;
    }
    if (count_digits(file_name.substr(dot_pos + 1)) > 0) {
        return false;
    }
    if (!isalpha(file_name[0])) {
        return false;
    }
    return check_extension(file_name);
}

string file_name_check(string file_name) {
    return check_filename(file_name) ? "Yes" : "No";
}