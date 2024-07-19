#include <cmath>
#include <cassert>

bool iscuber(int a) {
    int cube_root = round(cbrt(a));
    return (cube_root * cube_root * cube_root == a);
}