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
    assert(issame(maximum({1, 2, 3, -23, 243, -400, 0}, 3), {3, 243, 2}));
    assert(issame(maximum({4, 5, 1, 3, 2}, 2), {4, 5}));
    assert(issame(maximum({7, 7, 7, 7, 7}, 5), {7, 7, 7, 7, 7}));
    assert(issame(maximum({-1, -2, -3, -4, -5}, 2), {-1, -2}));
    cout << "All test cases passed!" << endl;
    return 0;
}