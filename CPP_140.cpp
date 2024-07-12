string fix_spaces(string text) {
    string result = "";
    int count = 0;

    for (char c : text) {
        if (c == ' ') {
            count++;
            if (count > 2 && !result.empty()) {
                result += '-';
            } else {
                result += '_';
            }
        } else {
            while (count > 2) {
                result += '-';
                count--;
            }
            result += c;
            count = 0;
        }
    }

    return result;
}