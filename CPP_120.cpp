#include <vector>
#include <algorithm>

int maximum(int a, int b) {
    return a > b ? a : b;
}

vector<int> maximum_k_elements(vector<int>& arr, int k) {
    sort(arr.begin(), arr.end(), greater<int>());
    return vector<int>(arr.begin(), arr.begin() + k);
}