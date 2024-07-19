int balance = 0;
    for (string s : lst) {
        for (char c : s) {
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
    if (balance == 0) {
        return "Yes";
    } else {
        return "No";
    }
}