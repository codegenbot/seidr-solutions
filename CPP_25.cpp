#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

bool issame(vector<int>& a, vector<int>& b) {
    return a == b;
}

vector<int> factorize(int n) {
    vector<int> factors;
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
    vector<int> expectedFactors = {2, 3, 3};
    vector<int> resultFactors = factorize(3 * 2 * 3);
    assert(issame(resultFactors, expectedFactors));
    return 0;
}