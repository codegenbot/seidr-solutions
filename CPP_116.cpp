#include <iostream>
#include <algorithm>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> sort_array(std::vector<int> arr) {
    std::sort(arr.begin(), arr.end());
    for (int i = 0; i < arr.size() - 1; ++i) {
        if ((arr[i] & (arr[i + 1] - 1)) != 0)
            return {};
    }
    return arr;
}

int maincpp_test() {
    assert(issame(sort_array({2,4,8,16,32}) , {2, 4, 8, 16, 32}));
    return 0;
}