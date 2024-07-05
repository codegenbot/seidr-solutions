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
    // Additional test cases
    assert(choose_num(3, 7) == 6);
    assert(choose_num(2, 4) == 4);
    assert(choose_num(5, 3) == -1);
    assert(choose_num(1, 1) == -1);
    assert(choose_num(6, 9) == 8);

    std::cout << "All test cases passed!" << std::endl;
    return 0;
}