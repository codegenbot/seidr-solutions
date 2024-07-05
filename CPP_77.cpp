#include <cmath>

bool iscuber(int a) {
    int cubeRoot = std::round(std::cbrt(a));
    return cubeRoot * cubeRoot * cubeRoot == a;
}