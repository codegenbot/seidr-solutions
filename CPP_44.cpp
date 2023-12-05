
#include <iostream>
#include <string>

std::string changeBase(int x, int base) {
    std::string result;
    while (x > 0) {
        result = std::to_string(x % base) + result;
        x /= base;
    }
    return result;
}
```

int main() {
    int x;
    std::cout << "Enter a number: ";
    std::cin >> x;
    std::cout << "The number in binary is: " << changeBase(x, 2) << std::endl;
    return 0;
}
```