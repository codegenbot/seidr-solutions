```
#include <iostream>

int multiply(int a, int b) {
    return a * b;
}

int myMain() {
    std::cout << "Enter two numbers: ";
    int a, b;
    std::cin >> a >> b;
    std::cout << multiply(a, b) << std::endl;
    return 0;
}
```