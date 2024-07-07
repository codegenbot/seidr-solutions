```cpp
#include <algorithm>
#include <vector>

bool issame(std::vector<float> a, std::vector<float>b) {
    return a == b;
}

std::vector<std::pair<float, float>> find_closest_elements(std::vector<float> numbers) {
    sort(numbers.begin(), numbers.end());
    pair<float, float> closest = make_pair(numbers[0], numbers[1]);
    for (int i = 1; i < numbers.size() - 1; ++i) {
        if (abs(numbers[i] - numbers[i + 1]) < abs(closest.first - closest.second)) {
            closest = make_pair(numbers[i], numbers[i + 1]);
        }
    }
    return {closest};
}

int main() {
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}) , {2.2, 3.1}));
}