int balance = 0;
    for(char ch : brackets) {
        if(ch == '<') balance++;
        else if(ch == '>') balance--;
        if(balance < 0) return false;
    }
    return balance == 0;
}