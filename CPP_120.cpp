#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> maximum(std::vector<int> arr, int k) {
    std::sort(arr.begin(), arr.end(), std::greater<int>());
    std::vector<int> result(arr.begin(), arr.begin() + k);
    return result;
}

int main() {
    std::vector<int> input = {1, 2, 3, -23, 243, -400, 0};
    assert(issame(maximum(input, 0), {}));
    
    return 0;
}