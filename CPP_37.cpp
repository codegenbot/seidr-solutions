#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<float> a, std::vector<float> b) {
    if(a.size() != b.size())
        return false;
    for(int i = 0; i < a.size(); i++)
        if(a[i] != b[i])
            return false;
    return true;
}

std::vector<float> sort_even(const std::vector<float>& input) {
    std::vector<float> output;
    for(float val : input) {
        if(val % 2 == 0)
            output.push_back(val);
    }
    return output;
}

int main() {
    std::vector<float> input;
    float val;
    while(std::cin >> val && val != -1.0f) {
        input.push_back(val);
    }
    if(input.size() > (std::numeric_limits<int>::max()) / sizeof(float)) {
        std::cout << "Error: Vector size exceeds maximum capacity";
        return 1;
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