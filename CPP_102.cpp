int choose_num(int x, int y) {
    for (int i = x; i <= y; i++) {
        if (i % 2 == 0) {
            break;
        }
    }
    return i; // or -1 if no even number found
}