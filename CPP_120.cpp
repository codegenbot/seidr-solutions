#include <vector>

int maximum(int a, int b) {
    return a > b ? a : b;
}

vector<int> k_largest_elements(vector<int>& arr, int k) {
    sort(arr.begin(), arr.end(), greater<int>());
    vector<int> result(arr.begin(), arr.begin() + k);
    return result;
}