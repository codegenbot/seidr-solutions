#include <cstdlib>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, abs(a % b));
}

int main() {
    int a, b;
    std::cout << "Enter two integers: ";
    std::cin >> a >> b;
    std::cout << "The GCD of " << a << " and " << b << " is " << gcd(a, b) << "." << std::endl;
    return 0;