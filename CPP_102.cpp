Here is the completed code:

```cpp
int choose_num(int x, int y) {
    if (x % 2 == 0 && y % 2 == 0) {
        return (y >= x) ? y : -1;
    } else if (x % 2 != 0) {
        return (y >= x + 1) ? (y * 2) - 1 : -1;
    } else {
        for (int i = x; i <= y; i++) {
            if (i % 2 == 0) {
                return i;
            }
        }
        return -1;
    }
}