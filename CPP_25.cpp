#include <vector>
#include <cassert>

bool issame(vector<int> a, vector<int> b);

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
    // Your main function code here
    return 0;
}