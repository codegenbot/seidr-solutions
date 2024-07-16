string result;
    bool prev_space = false;
    for (char& c : text) {
        if (c == ' ') {
            if (prev_space) continue;
            prev_space = true;
            if (result.length() >= 2 && result[result.length() - 1] == ' ' && result[result.length() - 2] == ' ') {
                result.pop_back();
                result += '-';
            } else {
                result += '_';
            }
        } else {
            prev_space = false;
            result += c;
        }
    }
    return result;
}