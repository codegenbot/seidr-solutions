#include <iostream>
#include <vector>
#include <algorithm>

std::pair<float, float> find_closest_elements(const std::vector<float>& numbers) {
    std::vector<float> sortedNumbers = numbers;
    std::sort(sortedNumbers.begin(), sortedNumbers.end());

    float minDiff = std::numeric_limits<float>::max();
    std::pair<float, float> closestElements;

    for (int i = 0; i < sortedNumbers.size() - 1; i++) {
        float diff = std::abs(sortedNumbers[i] - sortedNumbers[i + 1]);
        if (diff < minDiff) {
            minDiff = diff;
            closestElements = std::make_pair(sortedNumbers[i], sortedNumbers[i + 1]);
        }
    }

    return closestElements;
}

int main() {
    std::vector<float> numbers = {1.0, 2.0, 3.0, 4.0, 5.0, 2.2};
    std::pair<float, float> closest = find_closest_elements(numbers);
    std::cout << "(" << closest.first << ", " << closest.second << ")" << std::endl;

    return 0;
}