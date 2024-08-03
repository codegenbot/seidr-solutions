int count_digits(string file_name) {
    int count = 0;
    for (char c : file_name) {
        if (isdigit(c)) {
            count++;
            if (count > 3) return 1; // more than three digits found
        }
    }
    return 0; // no more than three digits found
}

int check_dot(string file_name) {
    int dot_count = 0;
    for (char c : file_name) {
        if (c == '.') {
            dot_count++;
            if (dot_count > 1) return 1; // more than one dot found
        }
    }
    return 0; // exactly one dot found
}

int check_extension(string file_name) {
    int extension_start = file_name.find('.');
    string extension = file_name.substr(extension_start + 1);
    if (extension != "txt" && extension != "exe" && extension != "dll") return 1; // invalid extension
    return 0; // valid extension
}

string file_name_check(string file_name) {
    if (count_digits(file_name) || check_dot(file_name) || !check_extension(file_name)) return "No";
    return "Yes";
}