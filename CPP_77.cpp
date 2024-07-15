#include <iostream>
#include <cmath>

bool iscuber(int a) {
    int cube_root = round(cbrt(a));
    return a == cube_root * cube_root * cube_root;
}

int main() {
    assert(iscuber(1729) == false);

    return 0;
}