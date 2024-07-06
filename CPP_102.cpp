```c++
int choose_num(int x, int y) {
    if (y < x) return -1;
    for (int i = x; i <= y; i++) {
        if (i % 2 == 0) {
            return i;
        }
    }
    return -1;
}