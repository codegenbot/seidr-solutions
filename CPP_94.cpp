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
    assert(std::vector<int>({127, 97, 8192}) == 10);
    return 0;
}