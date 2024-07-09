```cpp
int i = 0, count_open = 0;
while (i < brackets.length()) {
    if (brackets[i] == '<') {
        count_open++;
    } else if (brackets[i] == '>') {
        if (count_open == 0) return false;
        count_open--;
    }
    i++;
}
return count_open == 0;