#include <iostream>
#include <vector>
#include <cassert>

namespace Solution {
    int smallest_change(const std::vector<int>& arr);
}

int Solution::smallest_change(const std::vector<int>& arr) {
    int n = arr.size();
    int changes = 0;
    for (int i = 0; i < n / 2; ++i) {
        changes += (arr[i] != arr[n - i - 1]);
    }
    return changes;
}

std::vector<int> read_input() {
    std::vector<int> input;
    int value;
    while (std::cin >> value) {
        input.push_back(value);
    }
    return input;
}

int main() {
    assert(Solution::smallest_change({0, 1}) == 1);
    
    std::vector<int> input = read_input();
    
    std::cout << Solution::smallest_change(input) << std::endl;

    return 0;
}