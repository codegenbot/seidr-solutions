string result;
    bool consecutiveSpaces = false;
    for (char c : text) {
        if (c == ' ') {
            if (consecutiveSpaces) {
                result.pop_back();
                result.push_back('-');
            } else {
                result.push_back('_');
                consecutiveSpaces = true;
            }
        } else {
            result.push_back(c);
            consecutiveSpaces = false;
        }
    }
    return result;
}