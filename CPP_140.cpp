string result;
    bool is_prev_space = false;
    for (char c : text) {
        if (c == ' ') {
            if (is_prev_space) {
                result.pop_back();
                result += '-';
            } else {
                result += '_';
            }
            is_prev_space = true;
        } else {
            result += c;
            is_prev_space = false;
        }
    }
    return result;
}