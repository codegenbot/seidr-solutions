```
int count = 0, last = -1;
for (char c : str) {
    if (c == '[') count++;
    else if (c == ']') {
        if (last != -1 && last < --count)
            return true;
        last = count;
    }
}
return false;