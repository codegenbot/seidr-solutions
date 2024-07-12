#include <vector>
#include <iostream>
#include <cmath>
#include <initializer_list>

int sum_squares(std::vector<float> lst){
    int total = 0;
    for(float x : lst){
        total += std::ceil(x)*std::ceil(x);
    }
    return total;

int main() {
    std::vector<float> input;

    std::cout << "Enter numbers (enter -1 to stop): ";
    while(true) {
        float num;
        if(std::cin >> num) {
            if(num == -1.0f) break;
            input.push_back(num);
        } else {
            std::cerr << "Error: Invalid input." << std::endl;
            return 1;
        }
    }
    
    if(input.size() <= 1) {
        std::cerr << "Error: No valid input provided." << std::endl;
        return 1;
    } else {
        int result = sum_squares(input);
        std::cout << "Sum of squares: " << result << std::endl;
    }
    
    return 0;