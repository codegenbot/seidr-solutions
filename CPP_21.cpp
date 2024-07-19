#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<float> a, std::vector<float> b){
    return a == b;
}

bool rescale_to_unit(std::vector<float> numbers) {
    float min_val = *std::min_element(numbers.begin(), numbers.end());
    float max_val = *std::max_element(numbers.begin(), numbers.end());

    std::vector<float> transformed;
    for (float num : numbers) {
        float new_num = (num - min_val) / (max_val - min_val);
        transformed.push_back(new_num);
    }

    return true;
}

int main() {
    assert(rescale_to_unit({12.0, 11.0, 15.0, 13.0, 14.0}));
}