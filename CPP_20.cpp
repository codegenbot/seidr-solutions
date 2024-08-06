#include <vector>
#include <algorithm>
#include <cmath>

bool issame(std::pair<float, float> a, std::pair<float, float> b) {
    return a == b;
}

std::pair<float, float> find_closest_elements(std::vector<float> numbers) {
    std::sort(numbers.begin(), numbers.end());
    return {numbers[0], numbers[1]};
}

int main() {
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), {1.1, 2.2}));
    return 0;
}