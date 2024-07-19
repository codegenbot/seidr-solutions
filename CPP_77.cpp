#include <iostream>
#include <cassert>
#include <cmath>

bool iscuber(int a) {
    int cube_root = round(cbrt(a));
    return (cube_root * cube_root * cube_root == a);
}
// Example test case
assert(iscuber(1729) == false);