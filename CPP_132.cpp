int stack_size = 0;
for (char c : str) {
    if (c == '[') {
        stack_size++;
    } else if (c == ']') {
        if (stack_size <= 0) return false;
        stack_size--;
    }
}
return stack_size > 0;