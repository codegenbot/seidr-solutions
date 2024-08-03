#include <iostream>
#include <vector>
#include <algorithm>

vector<float> rescale_to_unit(vector<float> numbers);

vector<float> rescale_to_unit(vector<float> numbers) {
    float min_num = *min_element(numbers.begin(), numbers.end());
    float max_num = *max_element(numbers.begin(), numbers.end());
    vector<float> result;
    for (float num : numbers) {
        float rescaled_num = (num - min_num) / (max_num - min_num);
        result.push_back(rescaled_num);
    }
    return result;
}

bool issame(vector<float> a, vector<float> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<float> numbers = {1.0, 2.0, 4.0, 8.0};
    vector<float> rescaled_numbers = rescale_to_unit(numbers);
    vector<float> expected_result = {0.0, 0.142857, 0.428571, 1.0};

    std::cout << "Rescaled vector elements comparison: ";
    for (int i = 0; i < rescaled_numbers.size(); ++i) {
        std::cout << rescaled_numbers[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "All tests passed." << std::endl;

    return 0;
}  