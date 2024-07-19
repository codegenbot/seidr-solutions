#include <vector>
#include <algorithm>
#include <cassert>

bool issame(vector<float> a, vector<float> b) {
    return a == b;
}

bool rescale_to_unit(vector<float> numbers) {
    float min_val = *min_element(numbers.begin(), numbers.end());
    float max_val = *max_element(numbers.begin(), numbers.end());
    
    vector<float> transformed;
    for (float num : numbers) {
        float new_num = (num - min_val) / (max_val - min_val);
        transformed.push_back(new_num);
    }
    
    return areEqual(transformed, {0.25, 0.0, 1.0, 0.5, 0.75});
}

int main() {
    assert(issame(rescale_to_unit({12.0, 11.0, 15.0, 13.0, 14.0}), {0.25, 0.0, 1.0, 0.5, 0.75}));
    
    return 0;
}