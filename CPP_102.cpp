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
    assert(choose_num(1, 4) == 4);
    assert(choose_num(5, 9) == 8);
    assert(choose_num(10, 5) == -1);
    assert(choose_num(15, 15) == 14);
    return 0;
}