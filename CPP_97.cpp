#include <cmath>

int multiply(int a, int b){
    return std::abs((a % 10) * (b % 10));
}