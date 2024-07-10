#include <algorithm>
#include <vector>
#include <limits>
#include <utility>

bool issame(std::vector<float> a, std::vector<float> b) {
    return a == b;
}

std::vector<float> find_closest_elements(std::vector<float> numbers) {
    sort(numbers.begin(), numbers.end());
    float min_diff = std::numeric_limits<float>::max();
    std::pair<float, float> closest_pair;
    
    for (int i = 0; i < numbers.size() - 1; ++i) {
        float diff = numbers[i + 1] - numbers[i];
        if (diff < min_diff) {
            min_diff = diff;
            closest_pair = std::make_pair(numbers[i], numbers[i + 1]);
        }
    }
    
    return {closest_pair.first, closest_pair.second};
}

int main() {
    assert(issame({find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1})}, {2.2, 3.1}));
    return 0;
}