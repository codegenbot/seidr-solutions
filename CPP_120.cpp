#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> maximum(vector<int> arr, int k) {
    sort(arr.begin(), arr.end(), greater<int>());
    vector<int> result(arr.begin(), arr.begin() + k);
    sort(result.begin(), result.end());
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(maximum({1, 2, 3, -23, 243, -400, 0}, 0), {}));
    assert(issame(maximum({1, 2, 3, -23, 243, -400, 0}, 3), {2, 3, 243}));
    assert(issame(maximum({100, 200, 50, 50}, 2), {100, 200}));
    assert(issame(maximum({1, 5, 3, 8, 2}, 4), {3, 5, 8, 8}));
    return 0;
}