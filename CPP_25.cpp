#include <vector>
#include <cassert>

vector<int> issame(vector<int> a, vector<int> b) {
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

int main() {
    vector<int> a = {2, 2, 3, 5};
    vector<int> b = issame(a);
    assert(a == b);
}