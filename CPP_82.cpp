#include <iostream>
#include <string>
#include <cmath>
#include <cassert>

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    std::string str;
    std::cin >> str;
    int prime_length = isPrime(str.size());
    assert(prime_length == false);
    return 0;
}