#include <vector>
#include <algorithm>

int maximum(vector<int>& arr, int k) {
    sort(arr.begin(), arr.end(), greater<int>());
    arr.resize(k);
    return arr;
}

int main() {
    vector<int> arr = {3, 1, 4, 1, 5, 9, 2, 6};
    assert(maximum(arr, 3) == {9, 6, 5});
    return 0;
}