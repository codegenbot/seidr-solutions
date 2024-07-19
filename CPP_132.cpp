int balance = 0;
    for (char bracket : str) {
        if (bracket == '[') {
            balance++;
        } else if (bracket == ']' && balance > 0) {
            balance--;
        }
    }
    return balance < str.length() / 2 && balance > 0;
}