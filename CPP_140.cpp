string result;
    bool prev_space = false;
    for (char c : text) {
        if (c == ' ') {
            if (!prev_space) {
                result += '_';
            } else {
                result.pop_back();
                result += '-';
            }
            prev_space = true;
        } else {
            result += c;
            prev_space = false;
        }
    }
    return result;
}