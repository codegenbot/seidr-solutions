```cpp
#include <algorithm>
#include <vector>

bool isSame(std::vector<float> a, std::vector<float> b) {
    return a == b;
}

std::pair<float, float> find_closest_elements(std::vector<float> numbers) {
    std::sort(numbers.begin(), numbers.end());
    float min_diff = std::numeric_limits<float>::max();
    float closest_pair = std::make_pair(0.0f, 0.0f);

    for (int i = 1; i < numbers.size(); ++i) {
        float diff = numbers[i] - numbers[i-1];
        if (diff < min_diff) {
            min_diff = diff;
            closest_pair = std::make_pair(numbers[i-1], numbers[i]);
        }
    }

    return closest_pair;
}

int main() {
    assert(isSame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), {2.2, 3.1}));
}