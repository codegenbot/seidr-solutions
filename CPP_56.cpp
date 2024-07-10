int count_open = 0;

for (char bracket : brackets) {
    if (bracket == '<') {
        count_open++;
    } else if (bracket == '>') {
        if (count_open == 0) {
            return false;
        }
        count_open--;
    }
}

return count_open == 0;