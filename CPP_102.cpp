int choose_num(int x, int int) {
    if (x > y) {
        int temp = x;
        x = y;
        y = temp;
    }
    for (; x <= y; ++x) {
        if (x % 2 == 0) {
            return x;
        }
    }
    return -1;
}