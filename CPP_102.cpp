int choose_num(int x, int y) {
    if (x > y) return -1;
    if (y % 2 == 0) return y;
    if ((y - 1) >= x && (y - 1) % 2 == 0) return y - 1;
    return -1;
}