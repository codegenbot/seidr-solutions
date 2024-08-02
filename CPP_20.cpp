```cpp
#include <algorithm>
#include <vector>
#include <utility>

bool issame(std::vector<float> a, std::vector<float> b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<std::pair<float, float>> find_closest_elements(std::vector<float> numbers) {
    std::vector<pair<float, float>> result;
    
    if (numbers.size() <= 1) {
        return result;
    }
    
    sort(numbers.begin(), numbers.end());
    
    pair<float, float> closest = make_pair(numbers[0], numbers[0]);
    
    for (int i = 1; i < numbers.size() - 1; i++) {
        if (numbers[i + 1] - numbers[i] < closest.second - closest.first) {
            closest = make_pair(numbers[i], numbers[i + 1]);
        }
    }
    
    result.push_back(closest);
    
    return result;
}