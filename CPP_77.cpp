#include <cmath>

bool iscuber(int a) {
    int cubeRoot = round(std::cbrt(a));
    return cubeRoot * cubeRoot * cubeRoot == a;
}