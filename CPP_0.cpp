#include <iostream>
#include <vector>

std::vector<float> numbers;

bool has_close_elements(std::vector<float> input_numbers, float threshold){
    for(int i = 0; i < input_numbers.size(); i++){
        for(int j = i + 1; j < input_numbers.size(); j++){
            if(abs(input_numbers[i] - input_numbers[j]) <= threshold)
                return true;
        }
    }
    return false;
}

int main() {
    numbers = {1.0, 2.0, 3.9, 4.0, 5.0, 2.2};
    std::cout << (has_close_elements(numbers, 0.1) ? "True" : "False") << std::endl;
    return 0;
}