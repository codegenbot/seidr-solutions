#include <vector>
#include <algorithm>

float findMaxElement(const std::vector<float>& l) {
    auto max = *std::max_element(l.begin(), l.end());
    return max;
}

int main() {
    std::vector<float> numbers = {1.2, 3.4, 5.6, 7.8};
    auto max = *std::max_element(numbers.begin(), numbers.end());
    return 0;
}