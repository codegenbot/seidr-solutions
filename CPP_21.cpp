#include <iostream>
#include <vector>

bool issame(std::vector<float> a, std::vector<float> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<float> rescale_to_unit(std::vector<float> numbers){
    float min_num = numbers[0];
    float max_num = numbers[0];

    for(int i=1; i<numbers.size(); i++){
        if(numbers[i] < min_num){
            min_num = numbers[i];
        }
        if(numbers[i] > max_num){
            max_num = numbers[i];
        }
    }

    float range = max_num - min_num;
    std::vector<float> rescaled_numbers;

    for(int i=0; i<numbers.size(); i++){
        float rescaled_num = (numbers[i] - min_num) / range;
        rescaled_numbers.push_back(rescaled_num);
    }

    return rescaled_numbers;
}

int main() {
    std::vector<float> numbers = {10.5, 5.5, 8.7, 3.9};
    std::vector<float> expected_result = {0.484848, 0.0, 0.636364, 0.242424};

    std::vector<float> rescaled_numbers = rescale_to_unit(numbers);

    if (issame(rescaled_numbers, expected_result)) {
        std::cout << "Test passed!" << std::endl;
    } else {
        std::cout << "Test failed!" << std::endl;
    }

    return 0;
}