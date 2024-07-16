string result = "";
    int consecutive_spaces = 0;
    for (char c : text) {
        if (c == ' ') {
            consecutive_spaces++;
            if (consecutive_spaces > 2) {
                result += "-";
                consecutive_spaces = 1;
            } else {
                result += "_";
            }
        } else {
            result += c;
            consecutive_spaces = 0;
        }
    }
    return result;
}