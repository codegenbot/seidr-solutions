#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

std::vector<float> find_closest_elements(const std::vector<float>& numbers) {
    sort(numbers.begin(), numbers.end());
    float min_diff = numbers[1] - numbers[0];
    float min_num1 = numbers[0];
    float min_num2 = numbers[1];

    for (int i = 1; i < numbers.size() - 1; i++) {
        if (numbers[i + 1] - numbers[i] < min_diff) {
            min_diff = numbers[i + 1] - numbers[i];
            min_num1 = numbers[i];
            min_num2 = numbers[i + 1];
        }
    }

    return {min_num1, min_num2};
}

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return (std::abs(a[0] - b[0]) < 1e-6) && (std::abs(a[1] - b[1]) < 1e-6);
}

int main() {
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), {2.2, 3.1}));
    return 0;
}