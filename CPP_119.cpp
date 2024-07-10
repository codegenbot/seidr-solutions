int stack_size = 0;
bool valid = true;

for (const string& s : lst) {
    for (char c : s) {
        if (c == '(') {
            stack_size++;
        } else if (c == ')') {
            if (stack_size <= 0) {
                valid = false;
                break;
            }
            stack_size--;
        }
    }
}

return valid ? "Yes" : "No";