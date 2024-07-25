string result = "";
    bool consecutive = false;
    for (char c : text) {
        if (c == ' ') {
            if (consecutive) {
                result.pop_back();
                result += '-';
            } else {
                result += '_';
            }
            consecutive = true;
        } else {
            result += c;
            consecutive = false;
        }
    }
    return result;
}