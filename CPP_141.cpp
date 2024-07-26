int count_digits = 0;
    for (char c : file_name) {
        if (isdigit(c)) {
            count_digits++;
        }
    }
    if (count_digits > 3) {
        return "No";
    }

    size_t dot_pos = file_name.find('.');
    if (dot_pos == string::npos || dot_pos == 0 || dot_pos == file_name.size() - 1) {
        return "No";
    }

    string prefix = file_name.substr(0, dot_pos);
    string suffix = file_name.substr(dot_pos + 1);

    if (!isalpha(prefix[0])) {
        return "No";
    }

    if (suffix != "txt" && suffix != "exe" && suffix != "dll") {
        return "No";
    }

    return "Yes";
}