```cpp
#include <algorithm>
#include <vector>

bool same(vector<float> a,vector<float>b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    assert(same(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), {2.2, 3.1}));
    return 0;
}

std::vector<float> find_closest_elements(std::vector<float> numbers) {
    float min_diff = std::numeric_limits<float>::max();
    std::vector<float> closest_pair;

    for (int i = 0; i < numbers.size(); ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            float diff = std::abs(numbers[i] - numbers[j]);
            if (diff < min_diff) {
                min_diff = diff;
                closest_pair = {numbers[i], numbers[j]};
            }
        }
    }

    return closest_pair;
}