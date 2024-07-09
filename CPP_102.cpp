int choose_num(int x, int y) {
    if (x % 2 != 0) {
        x++;
    }
    if (x >= y) {
        return -1;
    }
    return y % 2 == 0 ? y : y - 1;
}