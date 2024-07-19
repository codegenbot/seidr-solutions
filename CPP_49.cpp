#include <iostream>
#include <cassert>

long long int modp(long long int n, long long int p);

int main() {
    long long int n, p;
    std::cin >> n >> p;
    std::cout << modp(n, p) << std::endl;
}

long long int modp(long long int n, long long int p) {
    assert(p != 0);
    return n % p;
}