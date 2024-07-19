#include <iostream>
#include <vector>
#include <algorithm>

std::pair<float, float> find_closest_elements(const std::vector<float>& numbers) {
    std::vector<float> sorted_numbers = numbers;
    sort(sorted_numbers.begin(), sorted_numbers.end());
    
    float min_diff = sorted_numbers[1] - sorted_numbers[0];
    std::pair<float, float> closest_pair = {sorted_numbers[0], sorted_numbers[1]};
    
    for (int i = 1; i < sorted_numbers.size() - 1; ++i) {
        float diff = sorted_numbers[i + 1] - sorted_numbers[i];
        if (diff < min_diff) {
            min_diff = diff;
            closest_pair = {sorted_numbers[i], sorted_numbers[i + 1]};
        }
    }
    
    return closest_pair;
}

int main() {
    std::vector<float> numbers = {3.5, 1.2, 4.8, 2.1, 5.6};
    std::pair<float, float> result = find_closest_elements(numbers);
    
    std::cout << "Closest pair: " << result.first << " and " << result.second << std::endl;
    
    return 0;
}