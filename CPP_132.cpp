bool is_nested(string str) {
    int openBrackets = 0;
    for (char c : str) {
        if (c == '[') {
            openBrackets++;
        } else if (c == ']') {
            openBrackets--;
            if (openBrackets > 0) {
                return true;
            }
        }
    }
    return false;
}