string result = "";
    int consecutive_spaces = 0;
    for (char c : text) {
        if (c == ' ') {
            consecutive_spaces++;
            if (consecutive_spaces > 2) {
                result.pop_back();
                result.pop_back();
                result += '-';
            } else {
                result += '_';
            }
        } else {
            consecutive_spaces = 0;
            result += c;
        }
    }
    return result;
}