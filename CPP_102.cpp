int choose_num(int x, int y) {
    if (x > y) {
        swap(x, y);
    }
    for (; x <= y; x++) {
        if (x % 2 == 0) {
            return x;
        }
    }
    return -1;
}