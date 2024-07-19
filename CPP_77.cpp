#include <cassert>
#include <iostream>
#include <cmath>

bool iscuber(int a) {
    int cube_root = round(std::cbrt(a));
    return (cube_root * cube_root * cube_root == a);
}

int main() {
    assert(iscuber(27) == true);
    assert(iscuber(64) == true);
    assert(iscuber(10) == false);

    return 0;
}