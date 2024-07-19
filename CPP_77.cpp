#include <iostream>
#include <cassert>
#include <cmath>

bool iscuber(int a) {
    int cube_root = round(cbrt(a));
    return (cube_root * cube_root * cube_root == a);
}

int main() {
    int num;
    std::cin >> num;
    
    if (iscuber(num)) {
        std::cout << "True\n";
    } else {
        std::cout << "False\n";
    }
    
    return 0;
}