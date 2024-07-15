#include <cstdlib>

int multiply(int a, int b) {
    int product = abs(a % 10) * abs(b % 10);
    return product;
}