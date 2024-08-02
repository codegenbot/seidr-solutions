int starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= 9; i++) {
        if (i == 1 || i % 10 == 1) {
            count++;
            for (int j = 1; j < n - 1; j++) {
                printf("%d", i);
                for (int k = 0; k < n - 2; k++) {
                    printf("0");
                }
                printf("\n");
            }
        }
    }
    return count;
}