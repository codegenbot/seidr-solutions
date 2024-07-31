#include <iostream>
#include <cmath>

bool iscuber(int a) {
    int cube_root = std::round(std::cbrt(std::abs(a)));
    return a == cube_root * cube_root * cube_root;
}

int main() {
    assert(iscuber(1729) == false);
    // Add more test cases here
    return 0;
}