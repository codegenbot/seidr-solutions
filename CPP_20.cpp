#include <algorithm>
#include <vector>

std::vector<float> find_closest_elements(std::vector<float> numbers) {
    auto min_diff = std::numeric_limits<float>::max();
    float closest_pair[2];
    
    for (int i = 0; i < numbers.size() - 1; i++) {
        for (int j = i + 1; j <= numbers.size(); j++) {
            if (std::abs(numbers[i] - numbers[j]) < min_diff) {
                min_diff = std::abs(numbers[i] - numbers[j]);
                closest_pair[0] = numbers[i];
                closest_pair[1] = numbers[j];
            }
        }
    }
    
    vector<float> result(2);
    result[0] = closest_pair[0];
    result[1] = closest_pair[1];
    
    return result;
}