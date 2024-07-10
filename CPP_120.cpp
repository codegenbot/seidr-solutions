#include <vector>
#include <algorithm>
#include <iostream>
#include <cassert>

bool issame(vector<int> a, vector<int> b) {
    // Function implementation
}

vector<int> maximum(vector<int> arr, int k) {
    sort(arr.begin(), arr.end(), greater<int>());
    return vector<int>(arr.begin(), arr.begin() + k);
}

int main() {
    assert(issame(maximum({1, 2, 3, -23, 243, -400, 0}, 0), {}));
    // Add more test cases as needed
    return 0;
}