#include <iostream>
#include <vector>
#include <algorithm>

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

void sort_even(std::vector<float>& nums) {
    std::vector<float> even_nums;
    for (size_t i = 0; i < nums.size(); ++i) {
        if (static_cast<int>(nums[i]) % 2 == 0) {
            even_nums.push_back(nums[i]);
        }
    }
    std::sort(even_nums.begin(), even_nums.end());
    size_t even_pos = 0;
    for (size_t i = 0; i < nums.size(); ++i) {
        if (static_cast<int>(nums[i]) % 2 == 0) {
            nums[i] = even_nums[even_pos];
            even_pos++;
        }
    }
}

int main() {
    std::vector<float> numbers = {3.5, 2.0, 4.5, 1.0, 6.0, 7.0, 8.5};
    
    sort_even(numbers);
    
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }
    
    return 0;
}