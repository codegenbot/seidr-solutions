#include <cassert>
#include <iostream>

int choose_num(int x, int y) {
    if (x > y) return -1;
    if (y % 2 == 0) return y;
    if ((y - 1) >= x) return y - 1;
    return -1;
}

int main() {
    // You can use assert for validation
    assert(choose_num(546, 546) == 546);
    assert(choose_num(1, 3) == 2);
    assert(choose_num(5, 8) == 8);
    assert(choose_num(10, 5) == -1);
    
    // Accepting user input
    int x, y;
    std::cout << "Enter values for x and y: ";
    std::cin >> x >> y;
    
    int result = choose_num(x, y);
    std::cout << "Result: " << result << std::endl;
    
    return 0;
}