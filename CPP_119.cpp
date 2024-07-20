int open = 0;
    for (string s : lst) {
        for (char c : s) {
            if (c == '(') {
                open++;
            } else {
                if (open == 0) {
                    return "No";
                }
                open--;
            }
        }
    }
    return (open == 0) ? "Yes" : "No";
}