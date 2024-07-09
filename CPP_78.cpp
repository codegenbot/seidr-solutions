int hex_key(string num) {
    int count = 0;
    for (char c : num) {
        if (c <= '9') {
            int decimal = c - '0';
        } else {
            int decimal = c - 'A' + 10;
        }
        if (decimal == 2 || decimal == 3 || decimal == 5 || decimal == 7 || decimal == 11 || decimal == 13) {
            count++;
        }
    }
    return count;
}