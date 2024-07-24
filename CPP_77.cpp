#include <cmath>

bool iscuber(int a) {
    int cube_root = std::round(std::cbrt(a));
    return (cube_root * cube_root * cube_root == a);
}