#include <cmath>

bool iscuber(int a) {
    int cube_root = static_cast<int>(round(cbrt(a)));
    return cube_root * cube_root * cube_root == a;
}