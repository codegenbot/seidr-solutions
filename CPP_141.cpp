int count_digits = 0;
    for (char c : file_name) {
        if (isdigit(c)) {
            count_digits++;
        }
    }

    size_t dot_pos = file_name.find('.');
    if (count_digits > 3 || dot_pos == string::npos || dot_pos == 0 || dot_pos == file_name.size() - 1) {
        return "No";
    }

    string file_extension = file_name.substr(dot_pos + 1);
    if (file_extension != "txt" && file_extension != "exe" && file_extension != "dll") {
        return "No";
    }

    for (char c : file_name.substr(0, dot_pos)) {
        if (isalpha(c)) {
            return "Yes";
        }
    }

    return "No";
}