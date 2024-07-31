#include <cmath>
#include <cassert>

bool iscuber(int a) {
    int cube_root = round(cbrt(abs(a)));
    return a == cube_root * cube_root * cube_root;
}

int main() {
    assert(iscuber(1729) == false);

    return 0;
}