#include <algorithm>
#include <vector>
#include <cassert>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> maximum(vector<int> arr, int k) {
    sort(arr.begin(), arr.end(), greater<int>());
    arr.resize(k);
    return arr;
}

assert(issame(maximum({1, 2, 3, -23, 243, -400, 0}, 0), {}));