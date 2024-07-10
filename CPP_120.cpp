#include <vector>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

bool maximum(int a, int b) {
    return a > b;
}

vector<int> solve(vector<int> arr, int k) {
    sort(arr.begin(), arr.end(), maximum);
    arr.resize(k);
    return arr;
}