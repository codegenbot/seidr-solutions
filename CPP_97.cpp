#include <cstdlib>

int multiply(int a, int b){
    int unit_a = abs(a) % 10;
    int unit_b = abs(b) % 10;
    return unit_a * unit_b;
}