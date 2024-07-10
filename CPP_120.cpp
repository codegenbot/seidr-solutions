#include <vector>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

void maximum(vector<int>& arr, int k) {
    sort(arr.begin(), arr.end(), greater<int>());
    arr.resize(k);
}

int main() {
    vector<int> arr = {3, 1, 4, 1, 5, 9, 2, 6};
    int k = 5;
    maximum(arr, k);
    return 0;
}