#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> remove_duplicates(std::vector<int> arr) {
    std::sort(arr.begin(), arr.end());
    arr.erase(std::unique(arr.begin(), arr.end()), arr.end());
    return arr;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    return a == b;
}