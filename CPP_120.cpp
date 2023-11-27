#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>
using namespace std;

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

vector<int> maximum(vector<int> arr, int k) {
    sort(arr.begin(), arr.end(), greater<int>());
    return vector<int>(arr.begin(), arr.begin() + k);
}

int main() {
    assert(issame(maximum({1, 2, 3, -23, 243, -400, 0}, 0), {}));
    assert(issame(maximum({1, 2, 3, -23, 243, -400, 0}, 1), {243}));
    assert(issame(maximum({1, 2, 3, -23, 243, -400, 0}, 3), {243, 3, 2}));
    assert(issame(maximum({-1, -2, -3, -23, -243, -400, 0}, 4), {0, -1, -2, -3}));
    
    // More test cases here
    
    return 0;
}