#include <iostream>
#include <cassert>

int modp(int a, int b) {
    return a % b;
}

int main() {
    int a, b;
    std::cin >> a >> b;
    std::cout << modp(a, b) << std::endl;

    return 0;
}