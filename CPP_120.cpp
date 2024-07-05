#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>
using namespace std;

vector<int> maximum(vector<int> arr, int k) {
    sort(arr.rbegin(), arr.rend()); // Sort in descending order
    vector<int> result(arr.begin(), arr.begin() + k); // Take the top k elements
    sort(result.begin(), result.end()); // Sort the result in ascending order
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(maximum({1, 2, 3, -23, 243, -400, 0}, 0), {}));
    assert(issame(maximum({1, 2, 3, -23, 243, -400, 0}, 3), {0, 2, 243}));
    cout << "All tests passed!" << endl;
    return 0;
}