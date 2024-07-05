#include <iostream>
#include <cassert>

int choose_num(int x, int y) {
    if (x > y) return -1;
    if (y % 2 == 0) return y;
    if (y - 1 >= x) return y - 1;
    return -1;
}

int main() {
    assert(choose_num(546, 546) == 546);
    assert(choose_num(3, 5) == 4);
    assert(choose_num(10, 12) == 12);
    assert(choose_num(10, 1) == -1);
    std::cout << "All tests passed!" << std::endl;
    return 0;
}