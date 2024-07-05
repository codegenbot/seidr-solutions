int balance = 0;
    for(char ch : brackets) {
        if(ch == '<') balance++;
        else if(ch == '>') {
            if(balance == 0) return false;
            balance--;
        }
    }
    return balance == 0;
}