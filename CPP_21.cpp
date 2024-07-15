#include <vector>
#include <algorithm>
#include <cassert>

bool issame(vector<float> a, vector<float> b) {
    return a == b;
}

vector<float> rescale_to_unit(vector<float> numbers) {
    float min_num = *min_element(numbers.begin(), numbers.end());
    float max_num = *max_element(numbers.begin(), numbers.end());
    
    vector<float> rescaled_numbers;
    for (float num : numbers) {
        float rescaled_num = (num - min_num) / (max_num - min_num);
        rescaled_numbers.push_back(rescaled_num);
    }
    
    return rescaled_numbers;
}

int main() {
    assert(issame(rescale_to_unit({12.0, 11.0, 15.0, 13.0, 14.0}), {0.25f, 0.0f, 1.0f, 0.5f, 0.75f}));
    
    return 0;
}