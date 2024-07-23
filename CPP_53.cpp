#include <iostream>
#include <cassert>

int add(int x, int y) {
    return x + y;
    assert(x + y == add(x, y)); 
}

int main() {
    int x, y;
    std::cin >> x >> y;

    // Convert integers into strings before concatenation
    std::string strX = std::to_string(x);
    std::string strY = std::to_string(y);

    // Attempt to concatenate strings instead of integers
    std::cout << strX + " + " + strY + " = " << add(x, y) << std::endl;

    return 0;
}