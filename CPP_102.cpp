int choose_num(int x, int y) {
    int last_even = -1;
    for (int i = x; i <= y; ++i) {
        if (i % 2 == 0) last_even = i;
    }
    return last_even;
}