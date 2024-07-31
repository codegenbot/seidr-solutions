```cpp
#include <iostream>
#include <vector>
#include <algorithm>

std::vector<float> get_positive(const std::vector<float>& input) {
    std::vector<float> positive;
    for (float num : input) {
        if (num > 0) {
            positive.push_back(num);
        }
    }
    return positive;
}

int main() {
    std::vector<float> input;
    std::cout << "Enter numbers separated by space: ";
    float num;
    while (std::cin >> num) {
        if(input.size()>1000){ 
            input.reserve(1024); 
        }
        input.push_back(num);
    }
    std::vector<float> positive = get_positive(input);
    if (std::all_of(positive.begin(), positive.end(), [](float x){ return x > 0; })) {
        std::cout << "All numbers are positive." << std::endl;
    } else {
        std::cout << "Not all numbers are positive." << std::endl;
    }
    return 0;
}