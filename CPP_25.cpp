#include <vector>
#include <cassert>
#include <algorithm>

vector<int> factorize(int n);
bool issame(vector<int> a, vector<int> b);

vector<int> factorize(int n) {
    vector<int> factors;
    for (int i = 2; i * i <= n; i++) {
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

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int value : a) {
        if (find(b.begin(), b.end(), value) == b.end()) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(issame(factorize(3 * 2 * 3), {2, 3, 3}));
    return 0;
}