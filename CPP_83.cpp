Here is the solution:

int starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= 9; i++) {
        if ((i == 1 || i % 10 == 1) && (n > 2)) {
            count += pow(10, n - 1);
        }
        if (i >= 2 && i < 10) {
            for (int j = 0; j <= 9; j++) {
                if ((j == 1 || j % 10 == 1) && (n > 2)) {
                    count++;
                }
            }
        }
    }
    return count;
}