int starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= 9; i++) {
        if (i == 1 || i % 10 == 1) {
            count++;
        }
        for (int j = 0; j < n - 1; j++) {
            if ((i * 10 + j) % 10 != 1 && (i * 10 + j) / 10 != 1) {
                break;
            }
        } else {
            count++;
        }
    }
    return count;
}