#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

bool same(vector<int> a, vector<int> b) {
    return a == b;
}

int get_odd_collatz(int n) {
    vector<int> sequence = {n};
    while (n != 1) {
        if (n % 2 == 0)
            n = n / 2;
        else
            n = 3 * n + 1;
        sequence.push_back(n);
    }
    return sequence.size();
}

int main_function() {
    assert(same({get_odd_collatz(1)}, vector<int>({1})));
    return 0;
}