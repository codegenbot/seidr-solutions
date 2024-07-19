#include <iostream>
#include <cmath>
#include <cassert>

bool iscuber(int a) {
    int cube_root = round(cbrt(a));
    return (cube_root * cube_root * cube_root == a);
}

int main() {
    int num;
    std::cin >> num;
    if (iscuber(num)) {
        std::cout << num << " is a perfect cube." << std::endl;
    } else {
        std::cout << num << " is not a perfect cube." << std::endl;
    }
    return 0;
}