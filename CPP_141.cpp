int count_digits(string file_name) {
    int count = 0;
    for (char c : file_name) {
        if (isdigit(c)) {
            count++;
        }
    }
    return count;
}

bool is_valid_format(string file_name) {
    size_t pos = file_name.find('.');
    if (pos == string::npos || pos + 4 >= file_name.size()) {
        return false;
    }
    string format = file_name.substr(pos + 1);
    return format == "txt" || format == "exe" || format == "dll";
}

string file_name_check(string file_name) {
    if (file_name.empty()) {
        return "No";
    }
    if (!isalpha(file_name[0])) {
        return "No";
    }
    if (count_digits(file_name) > 3) {
        return "No";
    }
    if (!is_valid_format(file_name)) {
        return "No";
    }
    return "Yes";
}