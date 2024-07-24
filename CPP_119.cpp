int stack_size = 0;
for (const string& s : lst) {
    for (char c : s) {
        if (c == '(') {
            stack_size++;
        } else if (c == ')') {
            if (stack_size == 0) return "No";
            stack_size--;
        }
    }
}
return stack_size == 0 ? "Yes" : "No";