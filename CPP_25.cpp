#include <vector>
#include <cassert>

using namespace std;

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
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

int main() {
    vector<int> expected{2, 3, 3};
    vector<int> result = factorize(3 * 2 * 3);
    
    assert(issame(result, expected));

    return 0;
}