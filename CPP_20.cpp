```cpp
#include <vector>
#include <algorithm>
#include <utility>

std::pair<float, float> find_closest_elements(std::vector<float> numbers) {
    std::sort(numbers.begin(), numbers.end());
    float minDiff = std::numeric_limits<float>::max();
    std::pair<float, float> closestPair;
    
    for(int i = 0; i < numbers.size() - 1; i++) {
        float diff = numbers[i + 1] - numbers[i];
        if(diff < minDiff) {
            minDiff = diff;
            closestPair.first = numbers[i];
            closestPair.second = numbers[i + 1];
        }
    }
    
    return closestPair;
}

bool issame(std::vector<float> vec1, std::vector<float> vec2) {
    if(vec1.size() != vec2.size())
        return false;
    for(int i = 0; i < vec1.size(); i++) {
        if(abs(vec1[i] - vec2[i]) > 0.000001)
            return false;
    }
    return true;
}