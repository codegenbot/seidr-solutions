```cpp
#include <vector>
#include <algorithm>
#include <cassert>

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    assert(isPrime(127) && isPrime(97) && !isPrime(8192));
    return 0;
}