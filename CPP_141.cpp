std::string file_name_check(std::string filename) {
    int digit_count = 0;
    bool found_dot = false;
    bool valid_prefix = true;

    if (!filename.empty()) {
        for (char c : filename) {
            if (isdigit(c)) {
                if (digit_count++ > 3)
                    return "No";
            } else if (c == '.') {
                found_dot = true;
            } else if (!valid_prefix && !ispunct(c))
                valid_prefix = false;
        }
    }

    if (digit_count <= 3 && found_dot && valid_prefix)
        return "Yes";
    else
        return "No";
}