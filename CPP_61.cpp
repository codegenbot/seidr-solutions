int i = 0, j = brackets.size() - 1;
while (i < j) {
    if (brackets[i] == '(' && brackets[j] == ')') {
        i++;
        j--;
    } else if (brackets[i] == '(') {
        j--;
    } else if (brackets[j] == ')') {
        i++;
    } else {
        return false;
    }
}
return i == j;