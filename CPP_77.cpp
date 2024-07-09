#include <cmath>
#include <cassert>
#include <iostream>

bool iscuber(int a);

bool iscuber(int a) {
    int cubeRoot = round(cbrt(abs(a)));
    return a == cubeRoot * cubeRoot * cubeRoot;
}