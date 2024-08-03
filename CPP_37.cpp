#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

std::vector<float> sort_even(std::vector<float> v) {
    std::sort(v.begin(), v.end(), [](float a, float b) {
        return ((int)a % 2 == 0 && (int)b % 2 == 0) ? a > b : (int)a % 2 < (int)b % 2;
    });
    return v;
}

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a == b;
}

int main() {
    std::vector<float> v = {5, 8, -12, 4, 23, 2, 3, 11, 12, -10};
    std::vector<float> tmp = sort_even(v);
    assert(issame(tmp, {-12, 8, 3, 4, 23, 2, 12, 11, 5, -10}));

    std::vector<float> input_vector = {5, 8, -12, 4, 23, 2, 3, 11, 12, -10};
    input_vector = sort_even(input_vector);
    assert(issame(input_vector, {-12, 8, 3, 4, 23, 2, 12, 11, 5, -10}));

    for (const auto& num : input_vector) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}