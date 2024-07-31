```
#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<float> a, std::vector<float> b) {
    return (a == b);
}

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
    float num;
    while (std::cin >> num) {
        input.push_back(num);
    }
    
    if (!input.empty()) input.reserve(input.size());
    std::vector<float> positive = get_positive(input);
    if (std::all_of(positive.begin(), positive.end(), [](float x){ return x > 0; })) {
        std::cout << "All numbers are positive." << std::endl;
    } else {
        std::cout << "Not all numbers are positive." << std::endl;
    }
    if (input.empty()) {
        std::cout << "No input provided. Please enter some numbers!" << std::endl;
    }
    return 0;
}