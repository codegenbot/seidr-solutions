```cpp
#include <algorithm>
#include <vector>

bool issame(vector<float> a, vector<float> b) {
    return a == b;
}

std::vector<float> rescale_to_unit(std::vector<float> numbers) {
    float minVal = *min_element(numbers.begin(), numbers.end());
    float maxVal = *max_element(numbers.begin(), numbers.end());

    std::vector<float> result;
    for (float num : numbers) {
        result.push_back((num - minVal) / (maxVal - minVal));
    }
    return result;
}

int main() {
    assert(rescale_to_unit({12.0, 11.0, 15.0, 13.0, 14.0}) == std::vector<float>{0.2, 0.0, 1.0, 0.5, 0.75});
    return 0;
}