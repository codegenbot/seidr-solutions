#include <vector>
#include <cassert>
#include <algorithm>
using namespace std;

vector<int> get_odd_collatz(int n) {
    vector<int> result;
    while (n != 1) {
        result.push_back(n);
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
    }
    result.push_back(1);
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

int main() {
    assert(issame(get_odd_collatz(1), {1}));
    return 0;
}