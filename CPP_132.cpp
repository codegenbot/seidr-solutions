bool is_nested(string str){
    int balance = 0;
    bool nested = false;
    for (char ch : str) {
        if (ch == '[') {
            balance++;
        } else if (ch == ']') {
            balance--;
        }
        if (balance > 1) {
            nested = true;
        }
        if (balance < 0) {
            return false;
        }
    }
    return nested && balance == 0;
}