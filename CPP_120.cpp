#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

std::vector<int> maximum(std::vector<int> arr, int k) {
    sort(arr.begin(), arr.end(), std::greater<int>());
    arr.resize(k);
    return arr;
}

// Main function or any other additional code is not provided as it was not necessary for the requested modification.