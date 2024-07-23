int balance = 0;
for (const auto& s : lst) {
    for (char c : s) {
        if (c == '(') {
            balance++;
        } else if (c == ')') {
            if (balance <= 0) return "No";
            balance--;
        }
    }
}
return balance == 0 ? "Yes" : "No";