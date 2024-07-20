for (char c : str) {
    if (c == '-') {
        result += ' ';
        inWord = true;
    } else if (inWord) {
        result += toupper(c);
        inWord = false;
    } else {
        result += tolower(c);
    }
}