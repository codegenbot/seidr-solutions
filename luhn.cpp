int luhn(int n) {
    int sum = 0;
    bool alt = false;

    for (int i = 15; i >= 1; --i) {
        int digit = (n / pow(10, i)) % 10;
        if (alt) {
            digit *= 2;
            if (digit > 9) {
                digit -= 9;
            }
        }
        sum += digit;
        alt = !alt;
    }

    return sum;
}