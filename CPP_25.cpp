#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> factorize(int n) {
    std::vector<int> factors;
    for (int i = 2; i * i <= n; ++i) {
        while (n % i == 0) {
            factors.push_back(i);
            n /= i;
        }
    }
    if (n > 1) {
        factors.push_back(n);
    }
    return factors;
}

int main() {
    // Correct call to the factorize function
    std::vector<int> result = factorize(24);
    
    // Replace the function call "factorize" with the correct function name
    bool result_same = issame(result, {2, 2, 2, 3});
    
    assert(result_same);

    return 0;
}