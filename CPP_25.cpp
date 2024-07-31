#include <vector>
#include <cassert>

bool issame(vector<int> a, vector<int> b) {
    // Add your logic here
}

vector<int> factorize(int n) {
    vector<int> factors;
    for (int i = 2; i <= n; ++i) {
        while (n % i == 0) {
            factors.push_back(i);
            n /= i;
        }
    }
    return factors;
}