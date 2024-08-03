#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

void sort_even(std::vector<float>& v) {
    std::vector<float> even_nums;
    for (const auto& num : v) {
        if (static_cast<int>(num) % 2 == 0) {
            even_nums.push_back(num);
        }
    }
    std::sort(even_nums.rbegin(), even_nums.rend());
    
    size_t index = 0;
    for (auto& num : v) {
        if (static_cast<int>(num) % 2 == 0) {
            num = even_nums[index++];
        }
    }
}

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a == b;
}

int main() {
    std::vector<float> v = {5, 8, -12, 4, 23, 2, 3, 11, 12, -10};
    std::vector<float> tmp = v;
    sort_even(tmp);
    assert(issame(tmp, {-12, 8, 3, 4, 23, 2, 12, 11, 5, -10}));
    return 0;
}