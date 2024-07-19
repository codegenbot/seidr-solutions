#include <vector>
#include <cassert>
using namespace std;

vector<int> factorize(int n);

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

bool compareVectors(const vector<int>& v1, const vector<int>& v2) {
    if (v1.size() != v2.size()) return false;
    for (size_t i = 0; i < v1.size(); ++i) {
        if (v1[i] != v2[i]) return false;
    }
    return true;
}

int main() {
    vector<int> expected = {2, 3, 3};
    vector<int> result = factorize(3 * 2 * 3);
    assert(compareVectors(result, expected));
}