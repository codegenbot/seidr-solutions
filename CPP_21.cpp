#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(vector<float> a, vector<float> b) {
    return a == b;
}

vector<float> rescale_to_unit(vector<float> numbers) {
    float min_num = *min_element(numbers.begin(), numbers.end());
    float max_num = *max_element(numbers.begin(), numbers.end());

    vector<float> rescaled;
    for (float num : numbers) {
        float rescaled_num = (num - min_num) / (max_num - min_num);
        rescaled.push_back(rescaled_num);
    }

    return rescaled;
}

int main() {
    vector<float> expected = {0.25, 0.0, 1.0, 0.5, 0.75};
    vector<float> result = rescale_to_unit({12.0, 11.0, 15.0, 13.0, 14.0});
    
    for (int i = 0; i < expected.size(); ++i) {
        assert(abs(expected[i] - result[i]) < 0.0001); // comparing float values with a small epsilon
    }

    return 0;
}