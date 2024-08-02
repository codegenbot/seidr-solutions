int count = 0;
for (char c : str) {
    if (c == '[') count++;
    else if (c == ']') {
        if (count > 0) count--;
        else return false;
    }
}
return count > 0;