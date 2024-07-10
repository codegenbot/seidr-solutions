#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<float>& a, const std::vector<float>& b);

void sort_even(std::vector<float>& vec) {
    std::sort(vec.begin(), vec.end(), [](float a, float b) {
        return (static_cast<int>(a) % 2 == 0) && (static_cast<int>(b) % 2 == 0) && a < b;
    });
}

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a == b;
}

int main() {
    std::vector<float> test_numbers = {5.0, 8.0, -12.0, 4.0, 23.0, 2.0, 3.0, 11.0, 12.0, -10.0};
    sort_even(test_numbers);
    assert(issame(test_numbers, std::vector<float>{-12.0, 8.0, 3.0, 4.0, 5.0, 2.0, 12.0, 11.0, 23.0, -10.0}));

    for (const auto& num : test_numbers) {
        std::cout << num << " ";
    }
    return 0;
}