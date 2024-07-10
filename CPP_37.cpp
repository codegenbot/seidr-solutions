#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<float> sort_even(const std::vector<float>& nums) {
    std::vector<float> even_nums;
    for (const auto& num : nums) {
        if (static_cast<int>(num) % 2 == 0) {
            even_nums.push_back(num);
        }
    }
    std::sort(even_nums.begin(), even_nums.end());
    return even_nums;
}

int main() {
    assert(issame(sort_even(std::vector<float>{5, 8, -12, 4, 23, 2, 3, 11, 12, -10}), std::vector<float>{-12.0f, 8.0f, 3.0f, 4.0f, 5.0f, 2.0f, 12.0f, 11.0f, 23.0f, -10.0f}));
    std::cout << "Test passed successfully!" << std::endl;
    return 0;
}