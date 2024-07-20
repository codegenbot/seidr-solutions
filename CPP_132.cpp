int balance = 0;
    for (char c : str) {
        if (c == '[') {
            balance++;
        } else {
            balance--;
        }
        if (balance >= 2) {
            return true;
        }
    }
    return false;
}