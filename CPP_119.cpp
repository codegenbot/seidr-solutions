int balance = 0;
    for (const string& str : lst) {
        for (char c : str) {
            if (c == '(') {
                balance++;
            } else {
                if (balance == 0) {
                    return "No";
                }
                balance--;
            }
        }
    }
    return balance == 0 ? "Yes" : "No";
}