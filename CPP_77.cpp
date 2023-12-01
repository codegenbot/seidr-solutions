#include <cmath>

bool iscuber(int a) {
    double cubeRoot = std::cbrt(a);
    double cube = std::pow(cubeRoot, 3);
    return (cube == a);
}