int stack_size = 0;
bool result = true;

for (const string &s : lst) {
    for (char c : s) {
        if (c == '(') {
            stack_size++;
        } else if (c == ')') {
            if (stack_size <= 0) {
                result = false;
                break;
            }
            stack_size--;
        }
    }
}

return result ? "Yes" : "No";