#include <cmath>
#include <cassert>

bool iscuber(int a) {
    int cube_root = round(cbrt(abs(a)));
    return (cube_root * cube_root * cube_root == abs(a));
}