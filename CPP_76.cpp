#include <cmath>
#include <iostream>

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
        double y = pow(n, log(x) / log(n));
        std::cout << (y == x ? "True" : "False") << std::endl;
    }
    return 0;
}