#include <vector>

bool issame(int a, int b) {
    return a == b;
}

bool maximum(const vector<int>& arr, int a, int b) {
    return issame(a, b);
}

int main() {
    vector<int> arr = {3, 7, 2, 5, 9, 1};
    int k = 3;
    sort(arr.begin(), arr.end(), greater<int>());
    vector<int> result(arr.begin(), arr.begin() + k);
    return 0;
}