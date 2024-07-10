#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>
#include <cmath>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); ++i) {
        if (std::abs(a[i] - b[i]) >= 0.00001) {
            return false;
        }
    }
    return true;
}

std::vector<float> sort_even(const std::vector<float>& vec) {
    std::vector<float> even_sorted;
    for (const auto& num : vec) {
        if (static_cast<int>(num) % 2 == 0) {
            even_sorted.push_back(num);
        }
    }
    std::sort(even_sorted.begin(), even_sorted.end());
    return even_sorted;
}

int main() {
    assert(issame(sort_even(std::vector<float>{5, 8, -12, 4, 23, 2, 3, 11, 12, -10}), std::vector<float>{-12.0f, 8.0f, 4.0f, 2.0f, 12.0f, -10.0f}));
    std::cout << "Test passed successfully!" << std::endl;
    return 0;
}