```
#include <iostream>
#include <cmath>
#include <cassert>

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int prime_length(const std::string& str) {
    int count = 0;
    for (int i = 0; i < str.size(); i++) {
        if (isPrime(str[i])) {
            count++;
        }
    }
    return count;
}

int main() {
    std::string str;
    std::cin >> str;
    assert(prime_length(str) == 0);
    return 0;
}
```