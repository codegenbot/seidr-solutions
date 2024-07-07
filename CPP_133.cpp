#include <iostream>
#include <vector>

int sum_squares(const std::vector<float>& input) {
    int output = 0;
    for (float num : input) {
        output += num * num;
    }
    return output;
}

int main() {
    std::vector<float> input{};
    float num;
    while(std::cin >> num) {
        if(num < 0 || num > 1000.0f) {
            std::cout << "Error: Input value must be between 0 and 1000." << std::endl;
            return 1;
        }
        input.push_back(num);
    }
    int output = sum_squares(input);
    std::cout << output << std::endl;
}