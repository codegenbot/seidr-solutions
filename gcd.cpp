```cpp
#include <iostream>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    std::cout << "Enter two integers: ";
    int a, b;
    std::cin >> a >> b;
    std::cout << "GCD: " << gcd(a, b) << std::endl;
    return 0;
}