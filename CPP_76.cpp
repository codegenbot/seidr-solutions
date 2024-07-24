#include <cmath>
#include <iostream>

bool is_simple_power(int x, int n) {
    if(n == 0)
        return x == 1;
    double y = pow(n, log(x) / log(n));
    return y == x;
}

int main() {
    int x;
    int n;
    std::cout << "Enter a number: ";
    std::cin >> x;
    std::cout << "Enter another number: ";
    std::cin >> n;
    if(n == 0)
        std::cout << (x == 1 ? "True" : "False") << std::endl;
    else {
        bool result = is_simple_power(x, n);
        std::cout << (result ? "True" : "False") << std::endl;
    }
    return 0;
}