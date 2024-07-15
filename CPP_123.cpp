#include <vector>
#include <cassert>
#include <algorithm>
using namespace std;

bool issame(vector<int> a, vector<int> b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

vector<int> get_odd_collatz(int n) {
    vector<int> collatz_seq;
    collatz_seq.push_back(n);
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
        if (n % 2 != 0) {
            collatz_seq.push_back(n);
        }
    }
    return collatz_seq;
}

int main() {
    assert(issame(get_odd_collatz(1), {1}));
    return 0;
}