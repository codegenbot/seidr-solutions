#include <iostream>

int modp(int n, int p) {
    return n % p;
}

int main() {
    int n, p;
    std::cin >> n >> p;
    std::cout << modp(n, p) << '\n';
    return 0;
}