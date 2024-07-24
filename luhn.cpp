int luhn(int n) {
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        int digit = (n % 10);
        if ((i % 2) == 1) {
            digit *= 2;
            if (digit > 9) {
                digit -= 9;
            }
        }
        sum += digit;
        n /= 10;
    }
    return sum;
}