string result;
    bool prevSpace = false;
    for (char c : text) {
        if (c == ' ') {
            if (prevSpace) {
                result.pop_back();
                result.push_back('-');
            } else {
                result.push_back('_');
            }
            prevSpace = true;
        } else {
            result.push_back(c);
            prevSpace = false;
        }
    }
    return result;
}