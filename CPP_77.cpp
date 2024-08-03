#include <cmath>
#include <cassert>

bool iscuber(int a) {
    int cubeRoot = static_cast<int>(round(cbrt(abs(a)));
    return a == cubeRoot * cubeRoot * cubeRoot;
}