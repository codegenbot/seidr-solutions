int starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= 9; ++i) {
        if (n == 1) {
            count += 2;
            break;
        }
        if ((i == 1 || i == n) && n > 1)
            count++;
        int num = i;
        for (int j = 2; j < n - 1; ++j) {
            num = num * 10 + (num % 10) + (num / 10);
        }
        if ((i == 1 || i == n) && n > 1)
            count++;
    }
    return count;
}