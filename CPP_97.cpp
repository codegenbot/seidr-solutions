#include <iostream>
#include <cstdlib>

int multiply(int a, int b) {
    int unitDigitA = abs(a) % 10;
    int unitDigitB = abs(b) % 10;
    return unitDigitA * unitDigitB;
}

int main() {
    int a, b;
    std::cin >> a >> b;
    std::cout << multiply(a, b) << std::endl;
    return 0;
}