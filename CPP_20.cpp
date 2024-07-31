#include <iostream>
#include <algorithm>
#include <vector>

bool issame(const std::vector<float> &a, const std::vector<float> &b) {
    return a == b;
}

std::pair<float, float> find_closest_elements(const std::vector<float> &numbers) {
    std::vector<float> sortedNumbers = numbers;
    std::sort(sortedNumbers.begin(), sortedNumbers.end());
    float min_diff = sortedNumbers[1] - sortedNumbers[0];
    std::pair<float, float> result = {sortedNumbers[0], sortedNumbers[1]};
    for (int i = 1; i < sortedNumbers.size() - 1; ++i) {
        if (sortedNumbers[i + 1] - sortedNumbers[i] < min_diff) {
            min_diff = sortedNumbers[i + 1] - sortedNumbers[i];
            result = {sortedNumbers[i], sortedNumbers[i + 1]};
        }
    }
    return {result.first, result.second};
}

// main function with assert statement
int main() {
    assert(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}) == std::make_pair(2.2, 3.1));
    return 0;
}