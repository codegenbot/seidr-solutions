#include <algorithm>
#include <vector>
#include <limits>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<float> find_closest_elements(std::vector<float> numbers) {
    std::vector<float> result;
    float min_diff = std::numeric_limits<float>::max();
    
    for (int i = 0; i < numbers.size() - 1; ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            float diff = std::abs(numbers[i] - numbers[j]);
            if (diff < min_diff) {
                min_diff = diff;
                result = {numbers[i], numbers[j]};
            }
        }
    }
    
    return result;
}

int main() {
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}) , {{2.2, 3.1}}));
    return 0;
}