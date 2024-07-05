#include <vector>
#include <algorithm>
#include <cassert>
#include <iostream>

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
    return a == b;
}

int main() {
    assert(issame(get_odd_collatz(1), vector<int>{1}));
    assert(issame(get_odd_collatz(7), vector<int>{1, 7, 11, 17, 25, 33, 49, 55, 59, 77, 83, 89}));
    cout << "All tests passed!" << endl;
    return 0;
}