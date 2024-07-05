#include <cassert>

int choose_num(int x, int y) {
    if (x > y) return -1;
    if (y % 2 == 0) return y;
    if ((y - 1) >= x) return y - 1;
    return -1;
}

int main() {
    // You can add more test cases to validate the function
    assert(choose_num(546, 546) == 546);
    // You can add more test cases here
    assert(choose_num(10, 15) == 14);
    assert(choose_num(5, 8) == 8);
    assert(choose_num(6, 5) == -1);
    assert(choose_num(0, 1) == -1);
    return 0;
}