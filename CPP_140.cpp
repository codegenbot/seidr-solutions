string result = "";
    int consecutive_spaces = 0;
    for (char c : text) {
        if (c == ' ') {
            consecutive_spaces++;
            if (consecutive_spaces > 2) {
                result.pop_back();
                result.pop_back();
                result.push_back('-');
            } else {
                result.push_back('_');
            }
        } else {
            result.push_back(c);
            consecutive_spaces = 0;
        }
    }
    return result;
}