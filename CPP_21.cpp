#include <vector>
#include <algorithm>

std::vector<float> rescale_to_unit(std::vector<float> numbers);

std::vector<float> rescale_to_unit(std::vector<float> numbers) {
    float min_num = *std::min_element(numbers.begin(), numbers.end());
    float max_num = *std::max_element(numbers.begin(), numbers.end());
    std::vector<float> result;
    for (float num : numbers) {
        float rescaled_num = (num - min_num) / (max_num - min_num);
        result.push_back(rescaled_num);
    }
    return result;
}

int main() {
    // Test the rescale_to_unit function
    std::vector<float> test_numbers = {2.0, 5.0, 8.0, 10.0};
    std::vector<float> rescaled_numbers = rescale_to_unit(test_numbers);

    return 0;
}