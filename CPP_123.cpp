#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> collatz(int n) {
    vector<int> sequence;
    sequence.push_back(n);
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
        sequence.push_back(n);
    }
    return sequence;
}

vector<int> get_odd_collatz(int n);

bool issame(vector<int> a, vector<int> b) {
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

vector<int> get_odd_collatz(int n) {
    vector<int> collatz_sequence = collatz(n);
    vector<int> odd_numbers;
    for (int i = 0; i < collatz_sequence.size(); i++) {
        if (collatz_sequence[i] % 2 != 0) {
            odd_numbers.push_back(collatz_sequence[i]);
        }
    }
    sort(odd_numbers.begin(), odd_numbers.end());
    return odd_numbers;
}

int main() {
    assert(issame(get_odd_collatz(1), {1}));
    assert(issame(get_odd_collatz(2), {1}));
    assert(issame(get_odd_collatz(3), {1, 5}));
    assert(issame(get_odd_collatz(9), {1, 5, 17, 13, 41, 9}));
    return 0;
}