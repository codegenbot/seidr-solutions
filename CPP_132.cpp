int stack = 0;
for (char c : str) {
    if (c == '[') stack++;
    else if (c == ']') {
        if (stack > 0) stack--;
        else return false;
    }
}
return stack > 0;