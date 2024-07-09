int starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= 9; i++) {
        if (i == 1 || i % 10 == 1) count++;
        if (n > 1) {
            for (int j = 1; j < pow(10, n - 1); j++) {
                long long num = i * pow(10, n - 1) + j;
                if ((i == 1 || i % 10 == 1) || (num % 10 == 1)) count++;
            }
        } else count++;
    }
    return count;
}