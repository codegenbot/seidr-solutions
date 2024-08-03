#include <vector>
#include <algorithm>
#include <iostream>

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

std::vector<float> sort_even(const std::vector<float>& v) {
    std::vector<float> even_nums;
    for (float num : v) {
        if (static_cast<int>(num) % 2 == 0) {
            even_nums.push_back(num);
        }
    }
    std::sort(even_nums.begin(), even_nums.end());
    return even_nums;
}

int main() {
    std::vector<float> test_input = {1.5, 2.4, 3.2, 4.8, 5.6, 6.1, 7.0};
    std::vector<float> sorted_even = sort_even(test_input);

    for (float num : sorted_even) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}