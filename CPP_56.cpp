```
int count = 0;
for (int i = 0; i < strlen(brackets); i++) {
    char bracket = brackets[i];
    if (bracket == '<') {
        count++;
    } else if (bracket == '>') {
        if (count <= 0)
            return false;
        count--;
    }
}
return count == 0;