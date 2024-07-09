string result;
    bool hasSpace = false;
    for (char c : text) {
        if (c == ' ') {
            if (!hasSpace) {
                result += '_';
                hasSpace = true;
            } else {
                if (result.back() != '-') {
                    result += '-';
                }
            }
        } else {
            result += c;
            hasSpace = false;
        }
    }
    return result;
}