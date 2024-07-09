#include <vector>
#include <algorithm>

int maximum(int a, int b) {
    return a > b ? a : b;
}

bool issame(int a, int b) {
    return a == b;
}

vector<int> contestProblem(vector<int> arr, int k) {
    sort(arr.begin(), arr.end(), greater<int>());
    arr.resize(k);
    return arr;
}

int main() {
    vector<int> arr = {3, 1, 7, 4, 5};
    assert(maximum(5, 7) == 7);
    return 0;
}