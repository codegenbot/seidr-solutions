int choose_num(int x, int y) {
    if (x % 2 == 0 && y % 2 == 0) {
        return y;
    } else if (x % 2 != 0 && y % 2 != 0) {
        return -1;
    } else if (x % 2 == 0) {
        for (int i = x; i <= y; i++) {
            if (i % 2 == 0) {
                return i;
            }
        }
    } else {
        for (int i = x; i <= y; i++) {
            if (i % 2 == 0) {
                return i;
            }
        }
    }
    return -1;
}