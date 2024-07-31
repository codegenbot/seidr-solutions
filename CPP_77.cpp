#include <iostream>
#include <cmath>

bool iscuber(int a) {
    int cubeRoot = round(cbrt(std::abs(a)));
    return a == cubeRoot * cubeRoot * cubeRoot;
}

int main() {
    assert (iscuber(1729) == false);
}