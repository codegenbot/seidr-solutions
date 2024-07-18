#include <cmath>

bool iscube(int a) {
    int cube_root = static_cast<int>(round(cbrt(static_cast<double>(a))));
    return (cube_root * cube_root * cube_root == a);
}