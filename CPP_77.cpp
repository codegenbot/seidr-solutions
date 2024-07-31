#include <iostream>
#include <cmath>

bool isCuber(int a) {
    int cubeRoot = round(cbrt(abs(a)));
    return a == cubeRoot * cubeRoot * cubeRoot;
}

int main() {
    assert(isCuber(1729) == false);
    return 0;
}