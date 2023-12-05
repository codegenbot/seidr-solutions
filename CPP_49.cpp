```
#include <iostream>
#include <cmath>

int modp(int n, int p) {
    return pow(2, n) % p;
}

int main() {
    std::cout << "Enter a number: ";
    int n;
    std::cin >> n;
    std::cout << "Enter a prime number: ";
    int p;
    std::cin >> p;
    std::cout << modp(n, p) << std::endl;
    return 0;
}
```