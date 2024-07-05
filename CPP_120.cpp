#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> maximum(vector<int> arr, int k) {
    // Sort array in descending order
    sort(arr.begin(), arr.end(), greater<int>());
    // Get the first k elements
    vector<int> result(arr.begin(), arr.begin() + k);
    // Sort the result in ascending order
    sort(result.begin(), result.end());
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    // Compare two vectors
    return a == b;
}

int main() {
    // Test cases
    assert(issame(maximum({1, 2, 3, -23, 243, -400, 0}, 0), {}));
    assert(issame(maximum({1, 2, 3, -23, 243, -400, 0}, 3), {0, 2, 243}));
    assert(issame(maximum({5, 1, 5, 5, 3}, 2), {5, 5}));
    assert(issame(maximum({-1, -2, -3, -4}, 2), {-2, -1}));
    assert(issame(maximum({1}, 1), {1}));
    return 0;
}