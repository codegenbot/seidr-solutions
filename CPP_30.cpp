#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<float> a) {
    float first = a[0];
    for (int i = 1; i < a.size(); i++) {
        if (std::abs(a[i] - first) > 1e-12f) return false;
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
        std::vector<float> positive = getPositive(input);
        if (issame(positive)) {
            std::cout << "All numbers are the same." << std::endl;
        } else if (std::all_of(positive.begin(), positive.end(), [](float x){ return x > 0; })) {
            std::cout << "All numbers are positive." << std::endl;
        } else {
            std::cout << "Not all numbers are positive." << std::endl;
        }
    } else {
        std::cout << "No input provided. Please enter some numbers!" << std::endl;
    }
}

int main() {
    printResult();
}