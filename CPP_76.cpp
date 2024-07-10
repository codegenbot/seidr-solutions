```cpp
#include <cmath>
#include <iostream>

bool isSimplePower(int x, int n) {
    double y = pow(n, log(x) / log(n));
    return (y == x);
}

int main() {
    int x, n;
    std::cout << "Enter a number: ";
    std::cin >> x;
    std::cout << "Enter the base: ";
    std::cin >> n;
    if(isSimplePower(x, n))
        std::cout << x << " is a simple power of " << n << ".\n";
    else
        std::cout << x << " is not a simple power of " << n << ".\n";
    return 0;
}