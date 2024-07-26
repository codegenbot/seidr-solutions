int balance = 0;
    for (char c : str) {
        if (c == '[') {
            balance++;
        } else if (c == ']' && balance > 0) {
            balance--;
        }
    }
    return balance < 0 && (str.find("[]") != string::npos);
}