#include <iostream>
#include <algorithm>
#include <vector>

bool issame(std::vector<float> a, std::vector<float> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::pair<float, float> find_closest_elements(std::vector<float> numbers) {
    sort(numbers.begin(), numbers.end());
    float min_diff = numbers[1] - numbers[0];
    std::pair<float, float> result = std::make_pair(numbers[0], numbers[1]);
    for (int i = 1; i < numbers.size() - 1; ++i) {
        if (numbers[i + 1] - numbers[i] < min_diff) {
            min_diff = numbers[i + 1] - numbers[i];
            result = std::make_pair(numbers[i], numbers[i + 1]);
        }
    }
    return result;
}

int main() {
    std::vector<float> numbers = {5.1, 2.3, 7.8, 1.9, 3.4};
    auto closest_pair = find_closest_elements(numbers);
    std::cout << closest_pair.first << " " << closest_pair.second << std::endl;
    return 0;
}