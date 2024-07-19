#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool are_same(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> by_length(std::vector<int> arr) {
    std::vector<int> result;

    std::vector<int> sorted_arr;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            sorted_arr.push_back(num);
        }
    }

    std::sort(sorted_arr.begin(), sorted_arr.end(), std::greater<int>());

    for (int num : sorted_arr) {
        result.push_back(num);
    }

    return result;
}

int main() {
    assert(are_same(by_length({9, 4, 8}), {9, 8, 4}));
  
    return 0;
}