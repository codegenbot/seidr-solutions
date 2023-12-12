```
#include <iostream>
#include <cmath>

int multiply(int a, int b) {
    return abs(a % 10) * abs(b % 10);
}

int main() {
    std::cout << "Enter two integers: ";
    int a, b;
    std::cin >> a >> b;
    std::cout << "The product of their unit digits is: " << multiply(a, b) << std::endl;
    return 0;
}
```