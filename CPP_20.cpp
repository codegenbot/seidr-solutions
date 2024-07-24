#include <algorithm>
#include <vector>

std::pair<float, float> find_closest_elements(std::vector<float> numbers) {
    std::sort(numbers.begin(), numbers.end());
    float closest = numbers[1] - numbers[0];
    pair<float, float> result = make_pair(numbers[0], numbers[0]);
    
    for (int i = 2; i < numbers.size(); i++) {
        if (numbers[i] - numbers[i-1] < closest) {
            closest = numbers[i] - numbers[i-1];
            result.first = numbers[i-1];
            result.second = numbers[i];
        }
    }
    
    return result;
}