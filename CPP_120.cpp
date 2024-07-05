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
    assert(issame(maximum({0, -1, 2, 1, 5, 9, -5}, 2), {5, 9}));
    assert(issame(maximum({10, 20, 30, 40, 50}, 5), {10, 20, 30, 40, 50}));
    cout << "All test cases passed!" << endl;
    return 0;
}