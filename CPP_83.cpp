int starts_one_ends(int n) {
    int count = 0;
    for (long long i = 1; i <= 9LL; i++) {
        if ((i == 1 || i % 10 == 1) && digits(i, n - 1)) {
            count++;
        }
    }
    return count;
}

bool digits(long long num, int n) {
    while (num > 0) {
        if (num % 10 != 1) {
            return false;
        }
        num /= 10;
        n--;
    }
    return n == 0;
}