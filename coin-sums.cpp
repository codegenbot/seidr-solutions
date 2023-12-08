```cpp
#include <iostream>
#include <string>

int main() {
    int cents;
    std::cin >> cents;

    int quarters = cents / 25;
    cents %= 25;

    int dimes = cents / 10;
    cents %= 10;

    int nickels = cents / 5;
    cents %= 5;

    int pennies = cents;

    std::cout << std::to_string(quarters) << std::endl;
    std::cout << std::to_string(dimes) << std::endl;
    std::cout << std::to_string(nickels) << std::endl;
    std::cout << std::to_string(pennies) << std::endl;

    return 0;
}
```