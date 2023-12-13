```cpp
#include <iostream>

int main() {
    long long cents;
    std::cin >> cents;

    long long quarters = cents / 25;
    cents %= 25;

    long long dimes = cents / 10;
    cents %= 10;

    long long nickels = cents / 5;
    cents %= 5;

    long long pennies = cents;

    std::cout << pennies << std::endl;
    std::cout << nickels << std::endl;
    std::cout << dimes << std::endl;
    std::cout << quarters << std::endl;

    return 0;
}
```