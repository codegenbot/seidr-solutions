#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> sort_array(std::vector<int> arr) {
    std::sort(arr.begin(), arr.end(), std::greater<int>());
    return arr;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}