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
    assert(choose_num(543, 546) == 546);
    assert(choose_num(545, 547) == 546);
    assert(choose_num(548, 546) == -1);
    std::cout << "All test cases passed!" << std::endl; 
    return 0;
}