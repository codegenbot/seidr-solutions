int fizz_buzz(int n) {
    int count = 0;
    for (int i = 1; i < n; i++) {
        if ((i % 11 == 0 || i % 13 == 0) && count_7(i)) {
            count++;
        }
    }
    return count;
}

bool count_7(int num) {
    while (num > 0) {
        int digit = num % 10;
        if (digit == 7)
            return true;
        num /= 10;
    }
    return false;
}