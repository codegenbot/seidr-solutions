#include <iostream>
#include <cassert>

int modp(int n, int p);

int main() {
    int n, p;
    std::cout << "Enter n and p: ";
    std::cin >> n >> p;
    int result = modp(n, p);
    std::cout << "Result: " << result << std::endl;
    return 0;
}

int modp(int n, int p) {
    return n % p;
}