string circular_shift(int x, int shift) {
    string str = to_string(x);
    int len = str.length();

    if (shift > len) {
        reverse(str.begin(), str.end());
        return str;
    }

    for (int i = 0; i < shift; i++) {
        char temp = str[len - 1];
        for (int j = len - 1; j > 0; j--) {
            str[j] = str[j - 1];
        }
        str[0] = temp;
    }

    return str;
}