#include <algorithm>
#include <iostream>
#include <vector>
#include <cassert>

namespace Solution {
    int smallest_change(const std::vector<int>& arr);
}

int Solution::smallest_change(const std::vector<int>& arr) {
    int n = arr.size();
    int changes = 0;
    for (auto it1 = arr.begin(), it2 = arr.rbegin(); it1 < arr.end() && it2 < arr.rend(); ++it1, ++it2) {
        changes += (*it1 != *it2);
    }
    return changes;
}

int main() {
    assert(Solution::smallest_change({0, 1}) == 0);
    
    std::vector<int> input;
    int value;
    while (std::cin >> value) {
        input.push_back(value);
    }
    
    std::cout << Solution::smallest_change(input) << std::endl;

    return 0;
}