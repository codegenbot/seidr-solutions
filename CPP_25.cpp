#include <vector>
#include <cassert>

vector<int> factorize(int n) {
    vector<int> factors;
    for (int i = 2; i <= n; i++) {
        while (n % i == 0) {
            factors.push_back(i);
            n /= i;
        }
    }
    return factors;
}

bool issame(vector<int> a, vector<int> b) {
    // implementation of issame function
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<int> factorize(int n);

    assert(issame(factorize(3 * 2 * 3), {2, 3, 3}));

    return 0;
}