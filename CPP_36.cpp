int fizz_buzz(int n) {
    int count = 0;
    for (int i = 1; i < n; i++) {
        if ((i % 11 == 0 || i % 13 == 0) && count_digits(i, '7') > 0) {
            count++;
        }
    }
    return count;
}

int count_digits(int num, char digit) {
    int count = 0;
    while (num > 0) {
        if (num % 10 == digit - '0') {
            count++;
        }
        num /= 10;
    }
    return count;
}