#include <cmath>
bool iscuber(int a) {
    int cubeRoot = round(cbrt(abs(a)));
    return a == cubeRoot * cubeRoot * cubeRoot;
}