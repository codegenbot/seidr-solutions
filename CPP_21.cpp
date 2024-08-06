#include <algorithm>
#include <vector>
#include <cassert>

bool issame(const std::vector<float>& a,const std::vector<float>& b){
    return std::vector<float>(a.begin(), a.end()) == std::vector<float>(b.begin(), b.end());
}

std::vector<float> rescale_to_unit(const std::vector<float>& numbers) {
    float min_num = *std::min_element(numbers.begin(), numbers.end());
    float max_num = *std::max_element(numbers.begin(), numbers.end());
    std::vector<float> result;
    for (float num : numbers) {
        result.push_back((num - min_num) / (max_num - min_num));
    }
    return result;
}

int main() {
    assert(issame(rescale_to_unit({12.0f, 11.0f, 15.0f, 13.0f, 14.0f}), {0.25f, 0.0f, 1.0f, 0.5f, 0.75f}));
    return 0;
}