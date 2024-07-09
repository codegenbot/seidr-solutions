```cpp
#include <algorithm>
#include <vector>
#include <numeric>

bool issame(vector<float> a, vector<float> b) {
    return a == b;
}

int main() {
    assert(rescale_to_unit({12.0, 11.0, 15.0, 13.0, 14.0}) == vector<float>({0.2, 0.0, 1.0, 0.5, 0.75}));
    return 0;
}

vector<float> rescale_to_unit(vector<float> numbers) {
    float minVal = *min_element(numbers.begin(), numbers.end());
    float maxVal = *max_element(numbers.begin(), numbers.end());

    vector<float> result;
    for (float num : numbers) {
        result.push_back((num - minVal) / (maxVal - minVal));
    }
    return result;
}