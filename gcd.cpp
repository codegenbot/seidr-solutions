Here's the corrected code:

```cpp
#include <iostream>

int gcd(int a, int b) {
    if(b == 0)
        return a;
    else
        return gcd(b, a%b);
}

int main() {
    int a = 0;
    int b = 0;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;
    std::cout << "GCD of " << a << " and " << b << " is: " << gcd(a, b) << std::endl;
    return 0;
}