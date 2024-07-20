string result;
    bool consecutive = false;
    for (char c : text) {
        if (c == ' ') {
            if (!consecutive) {
                result += '_';
                consecutive = true;
            } else {
                result.pop_back();
                result += '-';
            }
        } else {
            result += c;
            consecutive = false;
        }
    }
    return result;
}