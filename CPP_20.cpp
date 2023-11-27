#include <iostream>
#include <vector>
#include <algorithm>

std::vector<float> find_closest_elements(std::vector<float> numbers) {
    std::sort(numbers.begin(), numbers.end());
    float minDiff = std::abs(numbers[1] - numbers[0]);
    std::vector<float> closestElements;

    for (int i = 1; i < numbers.size() - 1; i++) {
        float diff = std::abs(numbers[i + 1] - numbers[i]);
        if (diff < minDiff) {
            minDiff = diff;
            closestElements.clear();
            closestElements.push_back(numbers[i]);
            closestElements.push_back(numbers[i + 1]);
        }
    }

    return closestElements;
}

int main() {
    std::vector<float> numbers = {1.0, 2.0, 3.0, 4.0, 5.0, 2.2};
    std::vector<float> closestElements = find_closest_elements(numbers);

    std::cout << "(" << closestElements[0] << ", " << closestElements[1] << ")" << std::endl;

    return 0;
}