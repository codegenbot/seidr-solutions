#include <algorithm>
#include <vector>

std::pair<float, float> find_closest_elements(std::vector<float> numbers) {
    std::pair<float, float> closest = {numbers[0], numbers[1]};
    for (int i = 0; i < numbers.size() - 1; i++) {
        for (int j = i + 1; j < numbers.size(); j++) {
            if (abs(numbers[i] - numbers[j]) < abs(closest.first - closest.second)) {
                closest = {numbers[i], numbers[j]};
            }
        }
    }
    return closest;
}