int starts_one_ends(int n) {
    int count = 0;
    for (long long i = 1; i <= 9; i++) {
        if (i == 1 || i % 10 == 1) {
            count++;
        }
        for (long long j = 1; j < pow(10, n - 1); j++) {
            long long num = i * pow(10, n - 1) + j;
            if (num >= 10 && to_string(num)[0] == '1' || to_string(num)[n - 1] == '1') {
                count++;
            }
        }
    }
    return count;
}