Here is the completed code:

```cpp
int choose_num(int x, int y) {
    if (x % 2 == 0 && y % 2 == 0) {
        return max(x, y);
    } else if ((x % 2 != 0 && y % 2 == 0) || (x % 2 == 0 && y % 2 != 0)) {
        return -1;
    } else if (x % 2 != 0 && y % 2 != 0) {
        int maxEven = x;
        for (int i = x + 1; i <= y; i++) {
            if (i % 2 == 0 && i > maxEven) {
                maxEven = i;
            }
        }
        return maxEven;
    } else {
        return -1;
    }
}