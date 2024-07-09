#include <iostream>
#include <cassert>
#include <string>

bool prime_length(std::string str) {
    return isPrime(static_cast<int>(str.length()));
}

int main() {
    assert(prime_length("0") == false);
    return 0;
}