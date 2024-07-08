#include <vector>
#include <algorithm>
#include <cassert>

vector<float> rescale_to_unit(vector<float> numbers) {
    float min_val = *min_element(numbers.begin(), numbers.end());
    float max_val = *max_element(numbers.begin(), numbers.end());
    vector<float> rescaled;
    for (float num : numbers) {
        float scaled = (num - min_val) / (max_val - min_val);
        rescaled.push_back(scaled);
    }
    return rescaled;
}

bool issame(vector<float> a, vector<float> b) {
    return a == b;
}

int main() {
    vector<float> input{1.0, 2.0, 3.0, 4.0, 5.0};
    vector<float> expected_output{0.0, 0.25, 0.5, 0.75, 1.0};

    vector<float> result = rescale_to_unit(input);
    assert(issame(result, expected_output));

    return 0;
}