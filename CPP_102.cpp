int choose_num(int x, int y) {
    if (x > y) return -1;
    if (y % 2 != 0) y--; 
    if (y >= x) return y;
    return -1;
}