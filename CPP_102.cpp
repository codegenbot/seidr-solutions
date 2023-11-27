int choose_num(int x, int y) {
    int maxEven = -1;
    for (int i = x; i <= y; i++) {
        if (i % 2 == 0 && i > maxEven) {
            maxEven = i;
        }
    }
    return maxEven;
}