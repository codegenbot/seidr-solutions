string result = "";
    int consecutiveSpaces = 0;
    for (char c : text) {
        if (c == ' ') {
            consecutiveSpaces++;
            if (consecutiveSpaces > 2) {
                result += "-";
                consecutiveSpaces = 0;
            } else {
                result += "_";
            }
        } else {
            result += c;
            consecutiveSpaces = 0;
        }
    }
    return result;
}