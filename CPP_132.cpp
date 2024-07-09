```
int stack = 0;
for (char c : str) {
    if (c == '[') stack++;
    else if (c == ']') stack--;
    if (stack < 0) return true;
}
return false;