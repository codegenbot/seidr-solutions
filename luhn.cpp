int luhn(int n) {
    int sum = 0;
    for (int i = 0; i < 16; i++) {
        if ((n / pow(10, 15 - i)) % 10 != 0) {
            int digit = (n / pow(10, 15 - i)) % 10;
            if (i % 2 == 1) {
                digit *= 2;
                if (digit > 9) {
                    digit -= 9;
                }
            }
            sum += digit;
        }
    }
    return sum;
}