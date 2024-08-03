
#include <vector>
#include <cassert>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::pair<float, float> find_closest_elements(const std::vector<float>& numbers) {
    if (numbers.size() < 2) {
        return {0.0f, 0.0f};
    }
    
    float minDiff = std::abs(numbers[1] - numbers[0]);
    std::pair<float, float> closestPair = {numbers[0], numbers[1]};
    
    for (size_t i = 1; i < numbers.size() - 1; ++i) {
        float diff = std::abs(numbers[i + 1] - numbers[i]);
        if (diff < minDiff) {
            minDiff = diff;
            closestPair = {numbers[i], numbers[i + 1]};
        }
    }
    
    return closestPair;
}

int main() {
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), {2.2, 3.1});
    return 0;
}