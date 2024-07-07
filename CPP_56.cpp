int stack_size = 0;
for (char bracket : brackets) {
    if (bracket == '<') {
        stack_size++;
    } else if (bracket == '>') {
        if (stack_size <= 0) return false;
        stack_size--;
    }
}
return stack_size == 0;