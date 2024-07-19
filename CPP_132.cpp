int n = str.length();
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (str[i] == '[') {
            count++;
        } else if (str[i] == ']' && count > 0) {
            count--;
        }
    }

    return count < n && count > 0;
}