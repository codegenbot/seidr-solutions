string fix_spaces(string text) {
    int consecutiveSpaces = 0;
    string result = "";

    for (int i = 0; i < text.length(); i++) {
        if (text[i] == ' ') { // found a space
            if (consecutiveSpaces >= 2) {
                result += "-";
                consecutiveSpaces = 0;
            }
            else {
                result += "_";
                consecutiveSpaces++;
            }
        }
        else { // not a space
            result += text[i];
            consecutiveSpaces = 0;
        }
    }

    return result;
}