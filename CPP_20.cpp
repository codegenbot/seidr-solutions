#include <iostream>
#include <vector>
#include <cmath>

std::pair<float, float> find_closest_elements(const std::vector<float>& numbers) {
    float minDiff = std::abs(numbers[0] - numbers[1]);
    std::pair<float, float> closestPair(numbers[0], numbers[1]);
  
    for (int i = 0; i < numbers.size() - 1; i++) {
        for (int j = i + 1; j < numbers.size(); j++) {
            float diff = std::abs(numbers[i] - numbers[j]);
      
            if (diff < minDiff) {
                minDiff = diff;
                closestPair = std::make_pair(numbers[i], numbers[j]);
            }
        }
    }
  
    return closestPair;
}

int main() {
    std::vector<float> numbers = {1.0, 2.0, 3.0, 4.0, 5.0, 2.2};
    std::pair<float, float> closestElements = find_closest_elements(numbers);
    std::cout << "(" << closestElements.first << ", " << closestElements.second << ")" << std::endl;

    return 0;
}