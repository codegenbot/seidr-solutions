#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> maximum(std::vector<int> arr, int k) {
    std::sort(arr.begin(), arr.end());
    return std::vector<int>(arr.rbegin(), arr.rbegin() + k);
}

int main() {
    assert(maximum({1, 2, 3, -23, 243, -400, 0}, 3) == vector<int>({0, -23, -400}));
    // Your code here
}