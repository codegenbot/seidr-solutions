#include <vector>
#include <cmath>
#include <algorithm>
#include <cassert>

float findMaxElement(const std::vector<float>& l) {
    auto max = *std::max_element(l.begin(), l.end());
    return max;
}

int main() {
    std::vector<float> numbers = {5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10};
    float result = findMaxElement(numbers);
    assert(result == 124);

    return 0;
}