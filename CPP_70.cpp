#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> strange_sort_list(std::vector<int> arr) {
    std::sort(arr.begin(), arr.end());
    return arr;
}

int main() {
    assert(issame(strange_sort_list({5, 3, 7, 1}), std::vector<int>({1, 3, 5, 7})));
    assert(issame(strange_sort_list({111111}), std::vector<int>({111111})));
    return 0;
}