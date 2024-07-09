#include <vector>
#include <algorithm>

int maximum(int a, int b) {
    return a > b ? a : b;
}

bool issame(int a, int b) {
    return a == b;
}

vector<int> solve(vector<int>& arr, int k) {
    sort(arr.begin(), arr.end(), greater<int>());
    arr.resize(k);
    return arr;
}

int main() {
    vector<int> arr = {3, 1, 4, 1, 5, 9};
    int k = 3;
    vector<int> result = solve(arr, k);
    assert(result.size() == 3);
    assert(issame(result[0], 9) && issame(result[1], 5) && issame(result[2], 4));
    return 0;
}