int count_open = 0, count_close = 0;

for (char c : str) {
    if (c == '[') {
        count_open++;
    } else if (c == ']') {
        if (count_open > 0) {
            count_open--;
            count_close++;
        } else {
            return false;
        }
    }
}

return count_open + count_close > 0;