#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> get_odd_collatz(int n) {
    vector<int> result;
    while (n != 1) {
        if (n % 2 != 0) {
            result.push_back(n);
        }
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
    }
    result.push_back(1); // 1 is always in the sequence
    sort(result.begin(), result.end());
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i)
        if (a[i] != b[i]) return false;
    return true;
}

int main() {
    assert(issame(get_odd_collatz(1), {1}));
    assert(issame(get_odd_collatz(5), {1, 5}));
    assert(issame(get_odd_collatz(6), {1, 3}));
    cout << "All tests passed!" << endl;
    return 0;
}