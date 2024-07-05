#include <iostream>
#include <vector>
#include <climits>
#include <cassert>

using namespace std;

vector<int> pluck(vector<int> arr) {
    int min_val = INT_MAX;
    int min_idx = -1;
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] % 2 == 0 && arr[i] < min_val) {
            min_val = arr[i];
            min_idx = i;
        }
    }
    if (min_idx == -1) {
        return {};
    }
    return {min_val, min_idx};
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(pluck({7, 9, 7, 1}), {}));
    assert(issame(pluck({8, 7, 10, 1}), {8, 0}));
    assert(issame(pluck({9, 11, 12, 7}), {12, 2}));
    assert(issame(pluck({3, 3, 2, 4}), {2, 2}));
    assert(issame(pluck({}), {}));
    
    cout << "All test cases passed!" << endl;
    return 0;
}