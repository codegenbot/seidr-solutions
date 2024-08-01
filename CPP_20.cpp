```c++
#include <algorithm>
#include <vector>
#include <utility>

bool issame(std::vector<float> a, std::vector<float> b) {
    return a == b;
}

int main() {
    assert(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}) == ({2.2, 3.1}));
    return 0;
}

std::vector<std::pair<float, float>> find_closest_elements(std::vector<float> numbers) {
    std::sort(numbers.begin(), numbers.end());
    std::pair<float, float> closest_pair = std::make_pair(numbers[0], numbers[1]);
    float min_diff = std::abs(numbers[1] - numbers[0]);
    
    for (int i = 1; i < numbers.size() - 1; ++i) {
        float diff = std::abs(numbers[i+1] - numbers[i]);
        if (diff < min_diff) {
            min_diff = diff;
            closest_pair = std::make_pair(std::min(numbers[i], numbers[i+1]), std::max(numbers[i], numbers[i+1]));
        }
    }
    
    std::vector<std::pair<float, float>> result;
    for (int i = 0; i < numbers.size() - 1; ++i) {
        if (std::abs(numbers[i+1] - numbers[i]) == min_diff) {
            result.push_back({std::min(numbers[i], numbers[i+1]), std::max(numbers[i], numbers[i+1])});
        }
    }
    
    return result;
}