string fix_spaces(string text) {
    string result;
    int space_count = 0;

    for (char c : text) {
        if (c == ' ') {
            space_count++;
        } else {
            if (space_count == 1) {
                result += '_';
            } else if (space_count > 1) {
                result += '-';
            }
            result += c;
            space_count = 0;
        }
    }

    if (space_count == 1) {
        result += '_';
    } else if (space_count > 1) {
        result += '-';
    }

    return result;
}