#include <vector>
#include <algorithm>

std::vector<std::pair<float, float>> find_closest_elements(std::vector<float> numbers) {
    if (numbers.size() <= 1) {
        return {};
    }
    
    std::vector<std::pair<float, float>> result;
    std::pair<float, float> closest = {numbers[0], numbers[0]};
    for (int i = 0; i < numbers.size(); i++) {
        for (int j = i + 1; j < numbers.size(); j++) {
            if (std::abs(numbers[i] - numbers[j]) < std::abs(closest.first - closest.second)) {
                closest = {numbers[i], numbers[j]};
            }
        }
    }
    
    result.push_back(closest);
    
    return result;
}