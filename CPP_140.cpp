string fix_spaces(string text) {
    string result = "";
    int count = 0;

    for (char c : text) {
        if (c == ' ') {
            if (count > 2) {
                result += "-";
            } else {
                result += "_";
            }
            count = 0;
        } else {
            result += c;
            count++;
        }
    }

    return result;
}