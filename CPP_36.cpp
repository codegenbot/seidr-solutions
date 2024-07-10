int fizz_buzz(int n) {
    int count = 0;
    for (int i = 1; i < n; i++) {
        if ((i % 11 == 0 || i % 13 == 0) && count_digits(i, '7') > 0)
            count++;
    }
    return count;
}

int count_digits(int n, char c) {
    int count = 0;
    while (n > 0) {
        if (n % 10 == c - '0')
            count++;
        n /= 10;
    }
    return count;
}