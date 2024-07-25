string result = "";
    bool prev_space = false;
    int count = 0;
    for (char c : text) {
        if (c == ' ') {
            count++;
            if (count > 2) {
                if (!prev_space) {
                    result += '-';
                }
                prev_space = true;
            } else {
                result += '_';
            }
        } else {
            result += c;
            count = 0;
            prev_space = false;
        }
    }
    return result;
}