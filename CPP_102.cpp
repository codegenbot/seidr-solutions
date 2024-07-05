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

    // You can add more test cases to validate the function
    assert(choose_num(546, 546) == 546);
    assert(choose_num(1, 4) == 4);
    assert(choose_num(1, 3) == 2);
    assert(choose_num(10, 5) == -1);
    assert(choose_num(7, 8) == 8);

    return 0;
}