#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> sort_array(vector<int> arr) {
    auto count_ones = [](int n) {
        return __builtin_popcount(n);
    };
    
    sort(arr.begin(), arr.end(), [&](int a, int b) {
        int ones_a = count_ones(a);
        int ones_b = count_ones(b);
        if (ones_a == ones_b) {
            return a < b;
        }
        return ones_a < ones_b;
    });
    
    return arr;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(sort_array({2, 4, 8, 16, 32}), {2, 4, 8, 16, 32}));
    cout << "Test passed!" << endl;
    return 0;
}