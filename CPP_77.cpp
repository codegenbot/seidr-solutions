#include <cmath>
#include <cassert>

bool iscuber(int a){
    int cube_root = static_cast<int>(std::round(std::cbrt(a)));
    return a == cube_root * cube_root * cube_root;
}

int main() {
    assert (iscuber(1729) == false);

    return 0;
}