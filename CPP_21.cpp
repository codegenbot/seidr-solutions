#include <iostream>
#include <vector>
#include <algorithm>

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
    vector<float> numbers = {1.0, 2.0, 3.0, 4.0, 5.0};
    vector<float> rescaled = rescale_to_unit(numbers);
    
    vector<float> test_numbers = {0.0, 0.25, 0.5, 0.75, 1.0};
    bool same = issame(rescaled, test_numbers);
    
    if (same) {
        std::cout << "Arrays are the same." << std::endl;
    } else {
        std::cout << "Arrays are different." << std::endl;
    }
    
    return 0;
}