#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> get_odd_collatz(int n) {
    vector<int> odd_numbers;
    while (n != 1) {
        if (n % 2 != 0) {
            odd_numbers.push_back(n);
        }
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
    }
    odd_numbers.push_back(1); // since the sequence always ends with 1
    sort(odd_numbers.begin(), odd_numbers.end());
    return odd_numbers;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(get_odd_collatz(1), {1}));
    assert(issame(get_odd_collatz(7), {1, 3, 5, 7, 11, 13}));
    cout << "All tests passed!" << endl;
    return 0;
}