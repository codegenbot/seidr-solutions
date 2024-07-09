```c++
#include <iostream>

int gcd();

int main() {
    int a, b;
    std::cout << "Enter two integers: ";
    std::cin >> a >> b;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return gcd();
}

int gcd() {
    return a;
}