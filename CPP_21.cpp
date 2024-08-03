#include <iostream>
#include <vector>
#include <algorithm>

std::vector<float> rescale_to_unit(std::vector<float> numbers);

int main() {
    std::vector<float> numbers = {2.0, 5.0, 8.0, 10.0};
    std::vector<float> result = rescale_to_unit(numbers);
    for (float num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}

std::vector<float> rescale_to_unit(std::vector<float> numbers) {
    float min_num = *min_element(numbers.begin(), numbers.end());
    float max_num = *max_element(numbers.begin(), numbers.end());
    std::vector<float> result;
    for (float num : numbers) {
        float rescaled_num = (num - min_num) / (max_num - min_num);
        result.push_back(rescaled_num);
    }
    return result;
}