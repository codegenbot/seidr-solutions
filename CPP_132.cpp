bool is_nested(string str){
    int nested = 0, open = 0;
    for (char ch : str) {
        if (ch == '[') {
            open++;
        } else if (ch == ']') {
            if (open > 0) {
                nested = 1;
                open--;
            }
        }
    }
    return nested && open > 0;
}