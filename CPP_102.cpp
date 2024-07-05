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
    assert(choose_num(500, 501) == 500);
    assert(choose_num(10, 9) == 9);
    assert(choose_num(9, 8) == 8);
    assert(choose_num(5, 3) == -1);
    assert(choose_num(4, 6) == 6);
    
    // Test with user input
    int x, y;
    std::cout << "Enter x and y values: ";
    std::cin >> x >> y;
    std::cout << "Result: " << choose_num(x, y) << std::endl;

    return 0;
}