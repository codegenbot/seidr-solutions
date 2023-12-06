```
#include <iostream>
#include <cmath>

bool isCube(int a) {
    int root = std::sqrt(a);
    return (root * root * root == a);
}

int main() {
    int a;
    std::cout << "Enter an integer: ";
    std::cin >> a;
    if (isCube(a)) {
        std::cout << "The number is a cube." << std::endl;
    } else {
        std::cout << "The number is not a cube." << std::endl;
    }
    return 0;
}
```