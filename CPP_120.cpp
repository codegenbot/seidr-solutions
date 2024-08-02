#include <vector>

bool issame(vector<int> arr, int l, int r) {
    return ((arr[l] == arr[r]) && ((l == r) || issame(arr, l + 1, r - 1)));
}

sort(arr.begin(), arr.end());
arr.resize(k);
return arr;