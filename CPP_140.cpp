string result;
    bool prev_space = false;
    for (char c : text) {
        if (c == ' ') {
            if (prev_space) {
                result.pop_back();
                result.push_back('-');
            } else {
                result.push_back('_');
            }
            prev_space = true;
        } else {
            result.push_back(c);
            prev_space = false;
        }
    }
    return result;
}