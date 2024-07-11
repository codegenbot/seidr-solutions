#include <cmath>

bool isCuber(int a) {
    int cubeRoot = round(cbrt(a));
    return (cubeRoot * cubeRoot * cubeRoot == a);
}