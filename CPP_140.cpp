string fix_spaces(string text) {
    string result = "";
    int count = 0;
    for (char c : text) {
        if (c == ' ') {
            count++;
            if (count > 2) {
                result += '-';
                count = 1;
            } else if (count == 1) {
                result += '_';
            }
        } else {
            while (count-- > 0) {
                result += '_';
            }
            result += c;
            count = 0;
        }
    }
    return result;
}