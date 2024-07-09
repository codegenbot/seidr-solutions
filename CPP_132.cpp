int i = 0, count_open = 0, count_close = 0;
while (i < str.length()) {
    if (str[i] == '[') {
        count_open++;
    } else if (str[i] == ']') {
        if (count_open > 0) {
            count_open--;
            count_close++;
        } else {
            return false;
        }
    }
    i++;
}
return count_close > 0;