#include <iostream>
#include <cmath>
#include <cassert>

bool iscuber(int a) {
    int root = round(cbrt(abs(a)));
    return a == root * root * root;
}