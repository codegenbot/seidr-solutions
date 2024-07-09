int sum = 0;
    for (string s : lst) {
        for (char c : s) {
            if (c == '(') {
                sum++;
            } else {
                if (sum == 0) return "No";
                sum--;
            }
        }
    }
    return sum == 0 ? "Yes" : "No";
}