#include <cmath>

int multiply(int a, int b) {
    int unitDigitA = std::abs(a) % 10;
    int unitDigitB = std::abs(b) % 10;
    return unitDigitA * unitDigitB;
}