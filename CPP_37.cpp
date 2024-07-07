#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

bool isSame(float a, float b) {
    if (std::isnan(a) && std::isnan(b)) return true;
    if (std::isinf(a) && std::isinf(b)) return a == b;
    return std::abs(a - b) < 1e-9;
}

std::vector<float> sortEven(std::vector<float> input) {
    std::vector<float> result;
    for (int i = 0; i < input.size(); i++) {
        if (i % 2 == 0) {
            float minVal = input[0];
            for (float val : input) {
                if (isSame(val, minVal)) {
                    minVal = val;
                }
            }
            result.push_back(minVal);
        } else {
            auto it = std::stable_partition(input.begin(), input.end(),
                                             [back = &result.back()](const float& val) {
                                                 return !isSame(val, *back);
                                             });
            if (it != input.end()) {
                result.push_back(*it);
            }
        }
    }
    return result;
}

int main() { 
    int n;
    std::vector<float> input;
    float num;
    std::cout << "Enter numbers separated by spaces: ";
    while ((std::cin >> num) && std::cin.peek() != '\n') {
        input.push_back(num);
    }
    std::cin.ignore();
    for (float val : sortEven(input)) {
        std::cout << val << " ";
    }
}