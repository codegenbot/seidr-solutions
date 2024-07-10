#include <vector>
#include <cassert>

std::vector<int> factorize(int n) {
    std::vector<int> factors;
    while (n % 2 == 0) {
        factors.push_back(2);
        n = n / 2;
    }
    for (int i = 3; i * i <= n; i = i + 2) {
        while (n % i == 0) {
            factors.push_back(i);
            n = n / i;
        }
    }
    if (n > 2) {
        factors.push_back(n);
    }
    return factors;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}