int balance = 0;
    for (char c : brackets) {
        if (c == '(') {
            balance++;
        } else {
            if (balance == 0) {
                return false;
            }
            balance--;
        }
    }
    return balance == 0;
}