```
#include <iostream>
#include <cmath>
#include <string>

bool isCube(int a) {
    int root = std::sqrt(a);
    return (root * root * root == a);
}

int main() {
    std::string s;
    std::cout << "Enter an integer: ";
    std::cin >> s;
    auto it = std::find_if(s.begin(), s.end(), isCube);
    if (it != s.end()) {
        std::cout << "The number is a cube." << std::endl;
    } else {
        std::cout << "The number is not a cube." << std::endl;
    }
    return 0;
}
```