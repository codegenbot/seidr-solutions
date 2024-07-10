int starts_one_ends(int n) {
    int count = 0;
    for (long long i = 1; i <= 9; ++i) {
        if ((i == 1 || i % 10 == 1) && (n > 1 || i * 10 + n - 1 >= 100))
            count++;
    }
    return count;
}