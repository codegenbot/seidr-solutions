string result;
    bool hasConsecutiveSpaces = false;
    for (char c : text) {
        if (c == ' ') {
            if (!hasConsecutiveSpaces) {
                result += '_';
                hasConsecutiveSpaces = true;
            } else {
                result += '-';
            }
        } else {
            result += c;
            hasConsecutiveSpaces = false;
        }
    }
    return result;
}