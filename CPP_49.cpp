#include <iostream>
#include <cassert>

int modp(int n, int p) {
    int result;
    std::cout << "Enter n and p: ";
    std::cin >> n >> p;
    result = n % p;
    std::cout << "Result: " << result << std::endl;
    return 0;
}

int main() {
    return modp(0, 0);
}