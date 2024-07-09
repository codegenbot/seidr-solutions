int starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= 9; i++) {
        if (i == 1 || i == 9) {
            count++;
        }
        for (int j = 1; j < i; j++) {
            if (j == 1 || j == 9) {
                count++;
            }
        }
    }
    return count;
}