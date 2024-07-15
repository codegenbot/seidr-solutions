int opened = 0;
for (char c : brackets) {
    if (c == '(') {
        opened++;
    } else if (c == ')' && opened > 0) {
        opened--;
    } else {
        return false;
    }
}
return opened == 0;