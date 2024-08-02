#include <vector>
#include <algorithm>
#include <iostream>
#include <cassert>
#include <cmath>

bool has_close_elements(std::initializer_list<float> numbers, float threshold) {
    std::vector<float> num_vec(numbers);
    std::sort(num_vec.begin(), num_vec.end());
    for (int i = 0; i < num_vec.size() - 1; ++i) {
        if (std::abs(num_vec[i] - num_vec[i + 1]) < threshold) {
            return true;
        }
    }
    return false;
}

int main() {
    std::vector<float> a = {1.0, 2.0, 3.9, 4.0, 5.0, 2.2};
    assert(!has_close_elements({1.1, 2.2, 3.1, 4.1, 5.1}, 0.5));
    return 0;
}