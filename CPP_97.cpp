```
#include <iostream>
#include <cmath>

int multiply(int a, int b) {
    return (a % b);
}

int main() {
    int a, b;
    std::cin >> a >> b;
    if (a == 0 || b == 0) {
        std::cout << "Invalid input" << std::endl;
        return 1;
    }
    std::cout << "The result is: " << multiply(a, b) << std::endl;
    return 0;
}
```