#include <algorithm>
#include <vector>

std::pair<float, float> find_closest_elements(std::vector<float> numbers) {
    std::sort(numbers.begin(), numbers.end());
    
    float minDiff = numeric_limits<float>::max();
    pair<float, float> closestPair = {numbers[0], numbers[0]};

    for(int i = 1; i < numbers.size(); i++) {
        float diff = numbers[i] - numbers[i-1];
        if(diff < minDiff) {
            minDiff = diff;
            closestPair.first = numbers[i-1];
            closestPair.second = numbers[i];
        }
    }

    return closestPair;
}