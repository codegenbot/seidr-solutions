#include <vector>
#include <cassert>
#include <algorithm>
#include <iostream>

using namespace std;

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
    assert(get_odd_collatz(1) == vector<int>{1});
    cout << "Test Passed!" << endl;
    return 0;
}