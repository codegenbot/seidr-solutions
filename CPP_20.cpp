#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<float> a, std::vector<float> b) {
    return (a[0] == b[0] && a[1] == b[1]) || (a[0] == b[1] && a[1] == b[0]);
}

std::pair<float, float> find_closest_elements(std::vector<float> numbers) {
    sort(numbers.begin(), numbers.end());
    float min_diff = numbers[1] - numbers[0];
    std::pair<float, float> closest_pair = std::make_pair(numbers[0], numbers[1]);
    for (int i = 1; i < numbers.size() - 1; ++i) {
        float diff = numbers[i + 1] - numbers[i];
        if (diff < min_diff) {
            min_diff = diff;
            closest_pair = std::make_pair(numbers[i], numbers[i + 1]);
        }
    }
    return {closest_pair.first, closest_pair.second};
}

int main() {
    std::vector<float> numbers = {3.4, 1.2, 4.5, 2.7};
    auto closest_elements = find_closest_elements(numbers);
    std::cout << "Closest Elements: " << closest_elements.first << " " << closest_elements.second << std::endl;

    return 0;
}