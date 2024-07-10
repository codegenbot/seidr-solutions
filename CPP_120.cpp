#include <vector>

bool issame(std::vector<int> arr) {
    int n = arr.size();
    for (int i = 1; i < n; ++i) {
        if (arr[i] != arr[0]) {
            return false;
        }
    }
    return true;
}

std::vector<int> max(std::vector<int> arr, int k){
    std::sort(arr.begin(), arr.end());
    arr.resize(k);
    return arr;
}