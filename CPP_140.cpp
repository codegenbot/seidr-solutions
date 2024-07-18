string result;
    bool consecutive_spaces = false;
    for (char c : text) {
        if (c == ' ') {
            if (!consecutive_spaces) {
                result += '_';
                consecutive_spaces = true;
            } else {
                result.pop_back();
                result += '-';
            }
        } else {
            result += c;
            consecutive_spaces = false;
        }
    }
    return result;
}