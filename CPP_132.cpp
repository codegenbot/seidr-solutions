bool is_nested(string str){
    int openCount = 0;
    for (char ch : str) {
        if (ch == '[') {
            openCount++;
        } else if (ch == ']') {
            if (openCount > 1) {
                return true;
            }
            openCount--;
        }
    }
    return false;
}