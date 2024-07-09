int starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= 9; i++) {
        if (i == 1 || i == 9) {
            count++;
        }
    }
    for (int i = 10; i < 10 * n; i++) {
        int num = i;
        while (num > 0) {
            if (num % 10 == 1) {
                count++;
                break;
            } else {
                num /= 10;
            }
        }
    }
    return count;
}