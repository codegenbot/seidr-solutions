```cpp
#include <algorithm>
#include <vector>

std::pair<float, float> find_closest_elements(std::vector<float> numbers) {
    std::sort(numbers.begin(), numbers.end());
    float min_diff = std::numeric_limits<float>::max();
    std::vector<float> closest_pair;

    for (int i = 0; i < numbers.size() - 1; ++i) {
        float diff = numbers[i + 1] - numbers[i];
        if (diff < min_diff) {
            min_diff = diff;
            closest_pair.clear();
            closest_pair.push_back(numbers[i]);
            closest_pair.push_back(numbers[i + 1]);
        }
    }

    return {closest_pair[0], closest_pair[1]};
}

int main() {
    assert(std::equal(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}) , std::pair<float, float>{{2.2, 3.1}}));
    return 0;
}