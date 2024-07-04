#include <cmath>

bool iscuber(int a) {
    int cubeRoot = std::cbrt(a);
    return cubeRoot * cubeRoot * cubeRoot == a || (cubeRoot + 1) * (cubeRoot + 1) * (cubeRoot + 1) == a;
}