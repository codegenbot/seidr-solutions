#include <vector>
#include <algorithm>

bool issame(std::vector<float> a, std::vector<float> b) {
    if(a.size() != b.size()) {
        return false;
    }
    for(int i = 0; i < a.size(); i++) {
        if(std::abs(a[i] - b[i]) > 1e-5) {
            return false;
        }
    }
    return true;
}

std::pair<float, float> find_closest_elements(std::vector<float> numbers) {
    std::sort(numbers.begin(), numbers.end());
    float minDiff = std::numeric_limits<float>::max();
    pair<float, float> closestPair;
    
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