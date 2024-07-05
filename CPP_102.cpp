#include <iostream>
#include <cassert>

int choose_num(int x, int y) {
    if (x > y) return -1;
    if (y % 2 == 0) return y;
    if ((y - 1) >= x) return y - 1;
    return -1;
}

int main() {
    // Add more test cases
    assert(choose_num(546, 546) == 546);
    assert(choose_num(100, 101) == 100);
    assert(choose_num(50, 49) == 48);
    assert(choose_num(10, 3) == -1);
    assert(choose_num(5, 8) == 8);

    std::cout << "All test cases passed.\n";
    return 0;
}