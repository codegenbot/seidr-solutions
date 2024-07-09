int choose_num(int x, int y) {
    int max_even = -1;
    for (int i = y; i >= x; --i) {
        if (i % 2 == 0 && i > max_even) {
            max_even = i;
        }
    }

    return max_even;
}