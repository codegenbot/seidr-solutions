int starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= 9; i++) {
        if (i == 1 || i % 10 == 1) {
            count++;
        }
        if (n > 1 && i == 1) {
            for (int j = 1; j < i; j++) {
                if (j % 10 != 1) {
                    break;
                }
            }
            if (j >= i) {
                count++;
            }
        }
    }
    return count;
}