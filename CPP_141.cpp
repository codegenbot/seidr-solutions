for (char c : file_name) {
    if (c == '.') {
        dot_count++;
        if (dot_count > 1) {
            valid = false;
            break;
        }
    } else if (isdigit(c)) {
        digit_count++;
        if (digit_count > 3) {
            valid = false;
            break;
        }
    } else if (!isalpha(c) && c != '.') {
        valid = false;
        break;
    }
}