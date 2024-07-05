#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

// This function takes in a vector of integers and an integer k.
// It returns the k largest integers in sorted order.
vector<int> maximum(vector<int> arr, int k) {
    sort(arr.begin(), arr.end(), greater<int>());
    vector<int> result(arr.begin(), arr.begin() + k);
    sort(result.begin(), result.end());
    return result;
}

// This function checks if two vectors are the same.
bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    // Testing the maximum function with various test cases.
    assert(issame(maximum({1, 2, 3, -23, 243, -400, 0}, 0), {}));
    assert(issame(maximum({1, 2, 3, -23, 243, -400, 0}, 3), {0, 2, 243}));
    assert(issame(maximum({5, 1, 5, 5, 3}, 2), {5, 5}));
    assert(issame(maximum({-1, -2, -3, -4}, 2), {-2, -1}));
    assert(issame(maximum({1}, 1), {1}));
    cout << "All test cases passed!" << endl;
    return 0;
}