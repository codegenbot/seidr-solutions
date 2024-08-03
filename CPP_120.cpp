#include <vector>
#include <algorithm>
#include <iostream>
#include <functional>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> maximum(std::vector<int> arr, int k) {
    std::partial_sort(arr.begin(), arr.begin() + k, arr.end(), std::greater<int>());
    arr.resize(k);
    return arr;
}

int main() {
    assert(issame(maximum({1, 2, 3, -23, 243, -400, 0}, 3), {243, 3, 2});
    
    return 0;
}