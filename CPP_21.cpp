#include <vector>
#include <algorithm>
#include <cassert>

std::vector<float> rescale_to_unit(std::vector<float> numbers) {
    float min_num = *min_element(numbers.begin(), numbers.end());
    float max_num = *max_element(numbers.begin(), numbers.end());
    
    for (float& num : numbers) {
        num = (num - min_num) / (max_num - min_num);
    }
    
    return numbers;
}

bool issame(std::vector<float> a, std::vector<float> b) {
    return a == b;
}

int main() {
    std::vector<float> input = {1.0, 2.0, 3.0, 4.0, 5.0};
    std::vector<float> output = rescale_to_unit(input);

    assert(issame(output, rescale_to_unit(input)));
}