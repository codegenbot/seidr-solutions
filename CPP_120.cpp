#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a == b;
}

std::vector<int> maximum(std::vector<int> arr, int k) {
    sort(arr.begin(), arr.end(), std::greater<int>());
    arr.resize(k);
    return arr;
}