#include <iostream>
#include <cassert>

int choose_num(int x, int y) {
    if (x > y) return -1;
    if (y % 2 == 0) return y;
    if ((y - 1) >= x) return y - 1;
    return -1;
}

int main() {
    assert(choose_num(546, 546) == 546);
    assert(choose_num(546, 547) == 546);
    assert(choose_num(546, 545) == -1);
    assert(choose_num(1, 3) == 2);
    assert(choose_num(2, 4) == 4);
    std::cout << "All test cases pass.\n";
    return 0;
}