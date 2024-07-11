int count_digits = 0;
    for (char c : file_name) {
        if (c >= '0' && c <= '9') {
            count_digits++;
        }
    }

    if (count_digits > 3) {
        return "No";
    }

    int dot_pos = file_name.find(".");
    if (dot_pos == string::npos || dot_pos == 0 || dot_pos == file_name.size() - 1) {
        return "No";
    }

    string before_dot = file_name.substr(0, dot_pos);
    string after_dot = file_name.substr(dot_pos + 1);

    if (before_dot[0] < 'a' || (before_dot[0] > 'z' && before_dot[0] < 'A') || before_dot[0] > 'Z') {
        return "No";
    }

    if (after_dot != "txt" && after_dot != "exe" && after_dot != "dll") {
        return "No";
    }

    return "Yes";
}