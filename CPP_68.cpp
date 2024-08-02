#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> pluck(std::vector<int> arr) {
    std::vector<int> result = {};
    if (arr.empty()) return result;
    int min_even = INT_MAX;
    int min_index = -1;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < min_even) {
            min_even = arr[i];
            min_index = i;
        }
    }
    if (min_even != INT_MAX) {
        result.push_back(min_even);
        result.push_back(min_index);
    }
    return result;
}