string result = "";
    for (char& c : s) {
        if (isalpha(c)) {
            if (c >= 'x' && c <= 'z') {
                result += (c - 26 + 4);
            } else {
                result += (c + 4);
            }
        } else {
            result += c;
        }
    }
    return result;
}