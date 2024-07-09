int choose_num(int x, int y) {
    for (int i = max(x, y); i >= min(x, y); i--) {
        if (i % 2 == 0) {
            return i;
        }
    }
    return -1;
}