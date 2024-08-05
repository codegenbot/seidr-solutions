bool is_valid_extension(const string& extension) {
    return extension == "txt" || extension == "exe" || extension == "dll";
}

string file_name_check(string file_name) {
    int count_digits = 0;
    int dot_index = file_name.find('.');
    if (dot_index == string::npos || dot_index == 0 || dot_index == file_name.size() - 1) {
        return "No";
    }

    for (char c : file_name) {
        if (isdigit(c)) {
            count_digits++;
        }
    }

    string name_before_dot = file_name.substr(0, dot_index);
    string extension = file_name.substr(dot_index + 1);

    if (count_digits > 3 || !isalpha(name_before_dot[0]) || !is_valid_extension(extension)) {
        return "No";
    }

    return "Yes";
}