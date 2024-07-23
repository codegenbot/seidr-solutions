#include <cmath>
#include <iostream>

bool is_simple_power(int x, int n){
    if(n == 0) return false;
    double result = pow(n, log(x)/log(n));
    return (result + 0.5) == x;
}

int main() {
    int x, n;
    std::cout << "Enter the number: ";
    std::cin >> x;
    std::cout << "Enter the power to which it should be raised: ";
    std::cin >> n;
    if(is_simple_power(x, n))
        std::cout << x << " is a simple power of " << n << "." << std::endl;
    else
        std::cout << x << " is not a simple power of " << n << "." << std::endl;
}