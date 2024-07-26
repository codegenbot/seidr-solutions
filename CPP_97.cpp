#include <cmath>

int multiply(int a, int b){
    int unitA = std::abs(a) % 10;
    int unitB = std::abs(b) % 10;
    return unitA * unitB;
}