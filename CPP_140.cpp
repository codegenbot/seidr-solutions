string result;
    bool prevSpace = false;
    for (char c : text) {
        if (c == ' ') {
            if (!prevSpace) {
                result += '_';
                prevSpace = true;
            } else {
                result += '-';
            }
        } else {
            result += c;
            prevSpace = false;
        }
    }
    return result;
}