string result;
    bool prevSpace = false;
    for (char c : text) {
        if (c == ' ') {
            if (prevSpace) {
                result.pop_back();
                result += '-';
            } else {
                result += '_';
            }
            prevSpace = true;
        } else {
            result += c;
            prevSpace = false;
        }
    }
    return result;
}