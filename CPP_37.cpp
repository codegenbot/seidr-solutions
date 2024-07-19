#include <iostream>
#include <vector>
#include <algorithm>

std::vector<float> input;
float val;

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a == b;
}

std::vector<float> sort_even(const std::vector<float>& input) {
    std::vector<float> output;
    for (float val : input) {
        if (val % 2 == 0) { 
            output.push_back(val);
        }
    }
    return output;
}

int main() {
    while(std::cin >> val) {
        input.push_back(val);
    }
    std::vector<float> output = sort_even(input);
    for (float v : output) {
        std::cout << v << " ";
    }
    if (!issame(output, input)) {
        std::cout << "\nTest case failed";
    } else{
        std::cout << "\nTest case passed";
    }
    return 0;
}