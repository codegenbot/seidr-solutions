bool correct_bracketing(string brackets){
    int balance = 0;
    for(char ch : brackets) {
        if(ch == '(') balance++;
        if(ch == ')') balance--;
        if(balance < 0) return false;
    }
    return balance == 0;
}