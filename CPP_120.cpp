#include <vector>

bool issame(int a, int b) {
    return a == b;
}

bool maximum(int a, int b) {
    return a > b;
}

vector<int> maximum(vector<int>& arr, int k) {
    sort(arr.begin(), arr.end(), maximum);
    vector<int> result(arr.begin(), arr.begin() + k);
    return result;
}