#include <vector>
#include <iostream>
#include <cassert>

std::vector<int> factorize(int n);
bool issame(std::vector<int> a, std::vector<int> b);

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> factorize(int n) {
    std::vector<int> factors;
    
    if (n < 0) {
        factors.push_back(-1);
        n = abs(n);
    }
    
    // Factorize the absolute value of n
    for (int i = 2; i * i <= n; ++i) {
        while (n % i == 0 && n > 1) {
            factors.push_back(i);
            n /= i;
        }
    }
    if (n > 1) {
        factors.push_back(n);
    }
    
    // Multiply factors by -1 if n was negative
    if (factors.size() == 1 && factors[0] == n) {
        factors.clear();
    }
    if (n < 0) {
        for (int i = 0; i < factors.size(); ++i) {
            factors[i] *= -1;
        }
    }
    return factors;
}

int main() {
    assert(issame(factorize(3 * 2 * 3), {2, 3, 3}));
    
    return 0;
}