int dot_pos = file_name.find(".");
    if (dot_pos == string::npos || dot_pos == 0 || dot_pos == file_name.size() - 1) {
        return "No";
    }

    string before_dot = file_name.substr(0, dot_pos);
    string after_dot = file_name.substr(dot_pos + 1);

    if (before_dot.empty()) {
        return "No";
    }

    int digit_count = 0;
    for (char c : before_dot) {
        if (isdigit(c)) {
            digit_count++;
        } else if (!isalpha(c)) {
            return "No";
        }
    }

    if (digit_count > 3) {
        return "No";
    }

    return (after_dot == "txt" || after_dot == "exe" || after_dot == "dll") ? "Yes" : "No";
}