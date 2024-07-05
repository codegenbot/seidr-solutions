#include <cmath>

bool iscuber(int a) {
    long long cubeRoot = round(cbrt(a));
    return cubeRoot * cubeRoot * cubeRoot == a;
}