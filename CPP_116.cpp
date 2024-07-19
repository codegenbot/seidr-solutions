#include <vector>
#include <algorithm>
#include <cassert>

void sort_array(std::vector<int>& arr) {
    std::sort(arr.begin(), arr.end());
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    sort_array(const_cast<std::vector<int>&>(a));
    sort_array(const_cast<std::vector<int>&>(b));

    return a == b;
}

int main() {
    std::vector<int> arr1 = {2, 4, 8, 16, 32};
    std::vector<int> arr2 = {2, 4, 8, 16, 32};
    
    assert(issame(arr1, arr2));
    
    return 0;
}