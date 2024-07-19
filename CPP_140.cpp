string fix_spaces(string text) {
    string result = "";
    int i = 0;
    while (i < text.length()) {
        if (text[i] == ' ') {
            if (i + 1 >= text.length() || text[i + 1] != ' ' || (i + 2 < text.length() && text[i + 2] != ' ')) {
                result += '_';
            } else {
                result += '-';
                i += 2;
                while (i + 1 < text.length() && text[i + 1] == ' ') {
                    i++;
                }
            }
        } else {
            result += text[i];
        }
        i++;
    }
    return result;
}