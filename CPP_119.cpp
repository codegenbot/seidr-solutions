int stack = 0;
for (auto str : lst) {
    for (char c : str) {
        if (c == '(') {
            stack++;
        } else if (c == ')') {
            if (stack <= 0) return "No";
            stack--;
        }
    }
}
if (stack > 0) return "No";
return "Yes";