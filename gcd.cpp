#include <iostream>
#include <vector>
#include <cstdlib>

int gcd(int a, int b) {
    a = abs(a);
    b = abs(b);
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    int a, b;
    std::cout << "Enter two integers: ";
    std::cin >> a >> b;
    
    int result = gcd(a, b);
    std::cout << "GCD of " << a << " and " << b << " is: " << result << std::endl;
    
    return 0;
}