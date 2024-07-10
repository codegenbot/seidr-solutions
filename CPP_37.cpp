#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<float>& a, const std::vector<float>& b);

void sort_even(std::vector<float>& vec) {
    std::sort(vec.begin(), vec.end(), [&](float a, float b) {
        if (static_cast<int>(a) % 2 == 0 && static_cast<int>(b) % 2 == 0) {
            return a < b;
        } else if (static_cast<int>(a) % 2 == 0) {
            return true;
        } else {
            return false;
        }
    });
}

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    std::vector<float> inputNumbers = {5, 8, -12, 4, 23, 2, 3, 11, 12, -10};
    sort_even(inputNumbers);
    assert(issame(inputNumbers, {-12, 8, 3, 4, 5, 2, 12, 11, 23, -10}));

    for (const auto& num : inputNumbers) {
        std::cout << num << " ";
    }
    return 0;
}