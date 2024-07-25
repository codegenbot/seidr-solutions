string result = "";
    bool hasConsecutiveSpaces = false;
    for (char c : text) {
        if (c == ' ') {
            if (hasConsecutiveSpaces) {
                result.pop_back();
                result += '-';
            } else {
                result += '_';
            }
            hasConsecutiveSpaces = true;
        } else {
            result += c;
            hasConsecutiveSpaces = false;
        }
    }
    return result;
}