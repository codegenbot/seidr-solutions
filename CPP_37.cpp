```cpp
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

bool compareVectors(const std::vector<float>& a, const std::vector<float>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (!compareFloats(a[i], b[i])) return false;
    }
    return true;
}

bool compareFloats(float a, float b) {
    return std::abs(a - b) > 1e-5;
}

std::vector<float> sortEven(std::vector<float> input) {
    std::vector<float> result;
    for (int i = 0; i < input.size(); i++) {
        if (i % 2 == 0) {
            float minVal = input[0];
            for (float val : input) {
                if (!compareFloats(val, minVal)) {
                    minVal = val;
                }
            }
            result.push_back(minVal);
        } else {
            auto it = std::stable_partition(input.begin(), input.end(),
                                             [back = &result.back()](const float& val) {
                                                 return !compareFloats(val, *back);
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