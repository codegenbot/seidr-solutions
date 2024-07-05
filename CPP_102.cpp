#include <cassert>
#include <iostream>

int choose_num(int x, int y) {
    if (x > y) return -1;
    if (y % 2 == 0) return y;
    if ((y - 1) >= x) return y - 1;
    return -1;
}

int main() {
    // Test cases
    assert(choose_num(546, 546) == 546);
    // More test cases can be added
    std::cout << "All tests passed successfully!" << std::endl;
    return 0;
}