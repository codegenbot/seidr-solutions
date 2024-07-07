```cpp
#include <algorithm>
#include <limits>
#include <vector>
#include <utility>

bool issame(vector<float> a, vector<float> b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<float> find_closest_elements(std::vector<float> numbers) {
    std::sort(numbers.begin(), numbers.end());
    float minDiff = std::numeric_limits<float>::max();
    std::pair<float, float> closestPair;
    
    for (int i = 0; i < numbers.size() - 1; ++i) {
        float diff = numbers[i + 1] - numbers[i];
        if (diff < minDiff) {
            minDiff = diff;
            closestPair = {numbers[i], numbers[i + 1]};
        }
    }
    
    return std::vector<float>({closestPair.first, closestPair.second});
}