int choose_num(int x, int y) {
    if (x % 2 == 0 && x <= y) {
        return x;
    } else if (y % 2 == 0 && x < y) {
        return y;
    } else {
        return -1;
    }
}