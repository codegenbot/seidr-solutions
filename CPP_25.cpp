#include <vector>
#include <cassert>

vector<int> factorization(int n) {
    vector<int> factors;
    for (int i = 2; i <= n; ++i) {
        while (n % i == 0) {
            factors.push_back(i);
            n /= i;
        }
    }
    return factors;
}