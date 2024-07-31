string num = to_string(n);
    int product = 1;
    for (char c : num) {
        int digit = c - '0';
        if (digit % 2 != 0) {
            product *= digit;
        }
    }
    return product;
}