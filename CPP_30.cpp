```cpp
#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<float> a, std::vector<float> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (std::abs(a[i] - b[i]) > 1e-9f) return false;
    }
    return true;
}

std::vector<float> getPositive(const std::vector<float>& input) {
    std::vector<float> positive;
    for (float num : input) {
        if (num > 0) {
            positive.push_back(num);
        }
    }
    return positive;
}

void printResult() {
    std::vector<float> input;
    float num;
    while (std::cin >> num) {
        input.push_back(num);
    }

    if (!input.empty()) {
        
    }
    std::vector<float> positive = getPositive(input);
    if (std::all_of(positive.begin(), positive.end(), [](float x){ return x > 0; })) {
        std::cout << "All numbers are positive." << std::endl;
    } else {
        std::cout << "Not all numbers are positive." << std::endl;
    }
    if (input.empty()) {
        std::cout << "No input provided. Please enter some numbers!" << std::endl;
    }
}

int main() {
    printResult();
}