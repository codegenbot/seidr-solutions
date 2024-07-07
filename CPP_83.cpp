int starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= 9; i++) {
        if (i == 1 || i == 9) {
            count++;
        }
        for (int j = 1; j < i; j++) {
            if ((j / (n - 1)) % 10 != 1 && (j % 10) != 1) {
                break;
            }
            if (i == n) {
                count++;
            }
        }
    }
    return count;
}