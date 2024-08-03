#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> get_odd_collatz(int n) {
    vector<int> collatz_sequence;
    while (n != 1) {
        collatz_sequence.push_back(n);
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
    }
    collatz_sequence.push_back(1);
    return collatz_sequence;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(get_odd_collatz(1), {1}));
    assert(issame(get_odd_collatz(6), {6, 3, 10, 5, 16, 8, 4, 2, 1}));
    assert(issame(get_odd_collatz(10), {10, 5, 16, 8, 4, 2, 1}));
    
    return 0;
}