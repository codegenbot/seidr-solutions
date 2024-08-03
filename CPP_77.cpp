#include <iostream>
#include <cmath>
#include <cassert>

bool iscuber(int a) {
    int root = round(cbrt(abs(a)));
    return a == root * root * root;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    if (iscuber(num)) {
        std::cout << num << " is a perfect cube." << std::endl;
    } else {
        std::cout << num << " is not a perfect cube." << std::endl;
    }

    return 0;
}