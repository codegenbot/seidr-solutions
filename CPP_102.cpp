int choose_num(int x, int y) {
    for (int i = x; i <= y; i++) {
        if (i % 2 == 0)
            return i;
    }
    // No even numbers found
    return -1;
}