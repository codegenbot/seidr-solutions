#include <algorithm>
#include <vector>
#include <limits>
#include <utility>

std::vector<float> find_closest_elements(std::vector<float> numbers) {
    std::sort(numbers.begin(), numbers.end());
    float min_diff = std::numeric_limits<float>::max();
    std::pair<float, float> closest_pair;
    
    for (int i = 0; i < numbers.size() - 1; i++) {
        float diff = numbers[i + 1] - numbers[i];
        if (diff < min_diff) {
            min_diff = diff;
            closest_pair = {numbers[i], numbers[i + 1]};
        }
    }
    
    return std::vector<float>(closest_pair.begin(), closest_pair.end());
}

bool issame(std::vector<float> a, std::vector<float> b){
    return a.size() == b.size() && std::equal(a.begin(),a.end(),b.begin());
}