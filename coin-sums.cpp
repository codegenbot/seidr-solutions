````
#include <iostream>

int main() {
    int cents;
    std::cin >> cents;

    quarters = cents / 25;
    cents %= 25;

    dimes = cents / 10;
    cents %= 10;

    nickles = cents / 5;
    cents %= 5;

    pennies = cents; 

    std::cout << quarters << "\n";
    std::cout << nickles << "\n";
    std::cout << dimes << "\n";
    std::cout << pennies << "\n";

    return 0;
}
```