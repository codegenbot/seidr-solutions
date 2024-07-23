```cpp
int choose_num(int x, int y) {
    for (int i = x; i <= y && i % 2 == 0; i++) {
        if (i % 2 == 0) {
            return i;
        }
    }
    return -1;
}