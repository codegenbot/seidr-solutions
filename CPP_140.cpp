string result;
    bool isConsecutive = false;
    for (char c : text) {
        if (c == ' ') {
            if (!isConsecutive) {
                result += '_';
            } else {
                result += '-';
            }
            isConsecutive = true;
        } else {
            result += c;
            isConsecutive = false;
        }
    }
    return result;
}