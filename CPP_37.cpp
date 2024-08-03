#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

void sort_even(std::vector<float>& v) {
    std::vector<float> even_nums;
    for (float num : v) {
        if (static_cast<int>(num) % 2 == 0) {
            even_nums.push_back(num);
        }
    }
    std::sort(even_nums.begin(), even_nums.end());
    size_t even_index = 0;
    for (size_t i = 0; i < v.size(); ++i) {
        if (static_cast<int>(v[i]) % 2 == 0) {
            v[i] = even_nums[even_index++];
        }
    }
}

bool issame(const std::vector<float>& v1, const std::vector<float>& v2) {
    if (v1.size() != v2.size()) {
        return false;
    }
    for (size_t i = 0; i < v1.size(); ++i) {
        if (v1[i] != v2[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    std::vector<float> v = {5, 8, -12, 4, 23, 2, 3, 11, 12, -10};
    std::vector<float> tmp = v;
    sort_even(tmp);
    assert(issame(tmp, {-12, 8, 3, 4, 23, 2, 12, 11, 5, -10}));
    return 0;
}