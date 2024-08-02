#include <vector>
#include <algorithm>

bool issame(const vector<int>& arr1, const vector<int>& arr2) {
    return arr1.size() == arr2.size() && equal(arr1.begin(), arr1.end(), arr2.begin());
}

vector<int> solve(vector<int>& arr, int k) {
    sort(arr.begin(), arr.end(), greater<int>());
    vector<int> result(arr.begin(), arr.begin() + k);
    return result;
}