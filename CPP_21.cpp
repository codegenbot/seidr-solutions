#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame  < typename T > (T a, T b) {
    return a == b;
}

std::vector<float> rescale_to_unit(std::vector<float> numbers) {
    float min_val = *min_element(numbers.begin(), numbers.end());
    float max_val = *max_element(numbers.begin(), numbers.end());
    std::vector<float> rescaled;

    for (float num : numbers) {
        float scaled = (num - min_val) / (max_val - min_val);
        rescaled.push_back(scaled);
    }

    return rescaled;
}

int main() {
    std::vector<float> numbers = {5, 10, 15, 20, 25};
    std::vector<float> rescaled = rescale_to_unit(numbers);

    assert(issame(rescaled[0], 0.0f));
    assert(issame(rescaled[1], 0.25f));
    assert(issame(rescaled[2], 0.5f));
    assert(issame(rescaled[3], 0.75f));
    assert(issame(rescaled[4], 1.0f));

    return 0;
}