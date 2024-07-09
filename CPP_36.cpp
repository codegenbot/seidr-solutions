int fizz_buzz(int n) {
    int count = 0;
    for (int i = 1; i < n; i++) {
        if ((i % 11 == 0 || i % 13 == 0) && count_digits(i, 7)) {
            count++;
        }
    }
    return count;
}

bool count_digits(int num, int digit) {
    while (num > 0) {
        if (num % 10 == digit) {
            return true;
        }
        num /= 10;
    }
    return false;
}