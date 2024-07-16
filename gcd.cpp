```cpp
#include <cstdlib>
#include <iostream>

int gcd(int a, int b) {
    a = abs(a);
    b = abs(b);
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a; 
}

int main() {
    int a, b;
    std::cout << "Enter two integers: ";
    std::cin >> a >> b;
    int result = gcd(a, b);
    std::cout << "GCD of the input numbers is: " << result << std::endl;
    return 0;
}