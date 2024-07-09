#include <cmath>
#include <cassert>
#include <iostream>

bool iscuber(double a);

bool iscuber(double a) {
    double cubeRoot = round(cbrt(abs(a)));
    return a == cubeRoot * cubeRoot * cubeRoot;
}