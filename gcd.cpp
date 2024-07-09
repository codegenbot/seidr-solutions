```cpp
#include <iostream>
int a, b;

int main() {
    std::cout << "Enter two integers: ";
    std::cin >> a >> b;
    std::cout << "GCD: " << gcd() << std::endl;
    return 0;
}

int gcd() {
    int temp = b;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}