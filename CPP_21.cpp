#include <algorithm>
#include <vector>
#include <cassert>

std::vector<float> rescale_to_unit(std::vector<float> numbers) {
    if (numbers.empty()) return numbers;
    
    float min_val = *std::min_element(numbers.begin(), numbers.end());
    float max_val = *std::max_element(numbers.begin(), numbers.end());

    for (float &num : numbers) {
        num = (num - min_val) / (max_val - min_val);
    }

    return numbers;
}

bool issame(std::vector<float> a, std::vector<float> b) {
    return a == b;
}

int main() {
    assert(issame(rescale_to_unit({12.0, 11.0, 15.0, 13.0, 14.0}), {0.25, 0.0, 1.0, 0.5, 0.75}));
    return 0;
}