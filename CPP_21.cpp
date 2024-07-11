#include <vector>
#include <algorithm>
#include <cassert>

bool issame(float a, float b) {
    return (a == b);
}

std::vector<float> rescale_to_unit(std::vector<float> numbers) {
    float min_val = *std::min_element(numbers.begin(), numbers.end());
    float max_val = *std::max_element(numbers.begin(), numbers.end());
    std::vector<float> rescaled;

    for (float num : numbers) {
        float scaled = (num - min_val) / (max_val - min_val);
        rescaled.push_back(scaled);
    }

    return rescaled;
}

int main() {
    std::vector<float> numbers = {1.0, 2.0, 3.0, 4.0, 5.0};

    std::vector<float> rescaled = rescale_to_unit(numbers);

    assert(issame(rescaled[0], 0.0));
    assert(issame(rescaled[1], 0.25));
    assert(issame(rescaled[2], 0.5));
    assert(issame(rescaled[3], 0.75));
    assert(issame(rescaled[4], 1.0));

    return 0;
}