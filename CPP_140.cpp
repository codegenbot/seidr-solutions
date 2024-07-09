string result = "";
    int count = 0;
    for (char c : text) {
        if (c == ' ') {
            count++;
            if (count > 2) {
                result += '-';
                count = 0;
            } else {
                result += '_';
            }
        } else {
            result += c;
            count = 0;
        }
    }
    return result;
}