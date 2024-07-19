#include <iostream>
#include <cassert>

long long int modp(long long int n, long long int p) {
    return n % p;
}

int main() {
    long long int n, p;
    std::cin >> n >> p;
    std::cout << modp(n, p) << "\n";
    return 0;
}