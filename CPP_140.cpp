string result;
    bool prevSpace = false;
    for (char c : text) {
        if (c == ' ') {
            if (!prevSpace) {
                result += '_';
            } else {
                result += '-';
            }
            prevSpace = true;
        } else {
            result += c;
            prevSpace = false;
        }
    }
    return result;
}