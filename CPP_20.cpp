#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

std::pair<float, float> find_closest_elements(std::vector<float> numbers) {
    std::sort(numbers.begin(), numbers.end());
    float min_diff = INFINITY;
    float num1, num2;
    for (int i = 0; i < numbers.size() - 1; ++i) {
        if (numbers[i + 1] - numbers[i] < min_diff) {
            min_diff = numbers[i + 1] - numbers[i];
            num1 = numbers[i];
            num2 = numbers[i + 1];
        }
    }
    return {num1, num2};
}

bool issame(std::pair<float, float> a, std::pair<float, float> b) {
    return a.first == b.first && a.second == b.second;
}

int main() {
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), {2.2, 3.1});
    return 0;
}