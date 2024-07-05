bool correct_bracketing(string brackets){
    int balance = 0;
    for(char ch : brackets) {
        if(ch == '<') balance++;
        else if(ch == '>') balance--;
        if(balance < 0) return false;  // A closing bracket without a matching opening bracket
    }
    return balance == 0;  // Check if all opening brackets are matched
}