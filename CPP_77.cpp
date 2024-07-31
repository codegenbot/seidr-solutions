#include <cmath>

bool isCube(int a) {
    int cube_root = round(cbrt(abs(a)));
    return a == cube_root * cube_root * cube_root;
}