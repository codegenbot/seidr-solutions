int luhn(int n) {
    int sum = 0;
    bool alt = false;
    while (n > 0) {
        int digit = n % 10;
        if (alt) {
            digit *= 2;
            if (digit > 9)
                digit -= 9;
        }
        sum += digit;
        n /= 10;
        alt = !alt;
    }
    return sum;
}