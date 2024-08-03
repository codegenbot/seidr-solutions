#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> maximum(vector<int> arr, int k) {
    sort(arr.begin(), arr.end());
    reverse(arr.begin(), arr.end());
    return vector<int>(arr.begin(), arr.begin() + k);
}