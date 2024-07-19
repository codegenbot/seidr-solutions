string result = "";
    bool consecutiveSpaces = false;
    for (int i = 0; i < text.length(); i++) {
        if (text[i] == ' ') {
            if (consecutiveSpaces) {
                result += "-";
            } else {
                result += "_";
                consecutiveSpaces = true;
            }
        } else {
            result += text[i];
            consecutiveSpaces = false;
        }
    }
    return result;
}