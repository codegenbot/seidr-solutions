```
#include <iostream>
#include <cmath>

int multiply(int a, int b) {
    return abs(a % 10) * abs(b % 10);
}

int main() {
    std::string input;
    std::cin >> input;
    int a = std::stoi(input.substr(0, 2));
    int b = std::stoi(input.substr(3, 2));
    std::cout << multiply(a, b) << std::endl;
    return 0;
}
```