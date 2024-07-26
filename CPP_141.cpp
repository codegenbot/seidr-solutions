int count_digits = 0;
    int dot_position = file_name.find(".");
    if (dot_position == string::npos || dot_position == 0 || dot_position == file_name.length() - 1) {
        return "No";
    }
    for (char c : file_name) {
        if (isdigit(c)) {
            count_digits++;
        }
    }
    if (count_digits > 3) {
        return "No";
    }
    string extension = file_name.substr(dot_position + 1);
    if (extension != "txt" && extension != "exe" && extension != "dll") {
        return "No";
    }
    if (!isalpha(file_name[0])) {
        return "No";
    }
    return "Yes";
}