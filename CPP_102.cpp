#include <iostream>
#include <cassert>

int choose_num(int x, int y) {
    if (x > y) return -1;
    if (y % 2 == 0) return y;
    if ((y - 1) >= x) return y - 1;
    return -1;
}

int main() {
    int x, y;
    std::cin >> x >> y;
    std::cout << choose_num(x, y) << std::endl;

    // Additional test cases for validation
    assert(choose_num(546, 546) == 546);
    assert(choose_num(1, 2) == 2);
    assert(choose_num(3, 4) == 4);
    assert(choose_num(5, 5) == 4);
    assert(choose_num(4, 3) == -1);

    return 0;
}