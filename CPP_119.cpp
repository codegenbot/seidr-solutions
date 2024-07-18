int balance = 0;
    for (const string& s : lst) {
        for (char c : s) {
            if (c == '(') {
                balance++;
            } else {
                if (balance > 0) {
                    balance--;
                } else {
                    return "No";
                }
            }
        }
    }
    return (balance == 0) ? "Yes" : "No";
}