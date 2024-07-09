int digit_count = 0;
    for (char c : file_name) {
        if (isdigit(c)) {
            digit_count++;
        }
    }

    size_t dot_pos = file_name.find('.');
    if (digit_count > 3 || dot_pos == string::npos || dot_pos == 0 || dot_pos == file_name.size() - 1) {
        return "No";
    }

    string file_extension = file_name.substr(dot_pos + 1);
    if (file_extension != "txt" && file_extension != "exe" && file_extension != "dll") {
        return "No";
    }

    return "Yes";
}