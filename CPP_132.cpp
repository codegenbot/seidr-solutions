bool is_nested(string str) {
    int open = 0, nested = 0;
    for(char ch : str) {
        if(ch == '[') {
            open++;
        } else if(ch == ']') {
            if(open > 0) {
                open--;
                nested++;
            }
        }
    }
    return nested > 1;
}