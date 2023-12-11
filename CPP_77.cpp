```cpp
#include <iostream>
#include <cmath>
#include <string>

bool isCube(std::string a) {
    int root = std::sqrt(a.size());
    return (root * root * root == a.size());
}

int main() {
    std::string a;
    std::cout << "Enter an integer: ";
    std::cin >> a;
    auto it = std::find_if(std::begin(a), std::end(a), isCube);
    if (it != std::end(a)) {
        std::cout << "The number is a cube." << std::endl;
    } else {
        std::cout << "The number is not a cube." << std::endl;
    }
    return 0;
}
```