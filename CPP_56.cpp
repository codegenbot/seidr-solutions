int count = 0;
for (char c : brackets) {
    if (c == '>') {
        if (count <= 0)
            return false;
        count--;
    } else if (c == '<') {
        count++;
    }
}
return count == 0;