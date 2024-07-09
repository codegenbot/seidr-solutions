int starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= 9; i++) {
        if (i == 1 || i % 10 == 1) {
            count++;
        }
        if (i > 1 && i % 100 >= 10 && i % 100 <= 19) {
            count++;
        }
    }
    return count;
}