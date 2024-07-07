#include <iostream>
#include <string>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, abs(a % b));
}

int main() {
    int a = 12;
    int b = 15; 
    std::cout << "GCD of " << a << " and " << b << " is: " << gcd(a, b) << std::endl;
    return 0;
}