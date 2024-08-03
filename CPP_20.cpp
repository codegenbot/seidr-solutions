```cpp
#include <algorithm>
#include <vector>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a == b;
}

std::pair<float, float> find_closest_elements(std::vector<float> numbers) {
    if (numbers.size() < 2) {
        throw std::runtime_error("Vector must have at least two elements");
    }

    auto min_max_pair = std::minmax_element(numbers.begin(), numbers.end());
    return {*min_max_pair.first, *min_max_pair.second};
}

int main() {
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}) , {2.2, 3.1}));
}