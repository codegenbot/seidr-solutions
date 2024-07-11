string result = "";
    for (int i = 0; i < s.length(); ++i) {
        if (isalpha(s[i])) {
            char shifted = s[i] + 2 * ('z' - s[i] + 1) % 26;
            if (shifted > 'z') {
                shifted -= 26;
            }
            result += shifted;
        } else {
            result += s[i];
        }
    }
    return result;
}