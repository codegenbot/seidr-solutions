string fix_spaces(string text) {
    string result = "";
    for (int i = 0; i < text.length(); i++) {
        if (text[i] == ' ') {
            if (result.length() >= 2 && result.back() == ' ' && result[rindex(result, ' ', i - 1)] == ' ') {
                result += '-';
            } else {
                result += '_';
            }
        } else {
            result += text[i];
        }
    }
    return result;
}

int rindex(string s, char c, int from) {
    for (int i = from; i >= 0; i--) {
        if (s[i] == c)
            return i;
    }
    return -1;
}