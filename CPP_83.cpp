int starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= 9; i++) {
        if ((i == 1 || i == 9) && n > 1) {
            count += pow(10, n - 1);
        } else if ((i == 1 || i == 9) && n == 1) {
            count++;
        }
    }
    for (int i = 2; i <= 8; i++) {
        if ((i == 1 || i == 9) && n > 1) {
            count += pow(10, n - 1);
        } else if ((i == 1 || i == 9) && n == 1) {
            count++;
        }
    }
    return count;
}