if (str.length() < 3) {
    return false;
}

int nesting = 0;

for (int i = 0; i < str.length(); i++) {
    if (str[i] == '[') {
        nesting++;
    } else if (str[i] == ']') {
        nesting--;
    }

    if (nesting >= 2) {
        return true;
    }
}

return false;