```cpp
#include <vector>
#include <cmath>
#include <iostream>

int sum_squares(std::vector<float> lst){
    int total = 0;
    for(float x : lst){
        total += std::ceil(x)*std::ceil(x);
    }
    return total;

int main() {
    std::vector<float> input;
    float num;
    
    std::cout << "Enter numbers (enter -1 to stop): ";
    while(std::cin >> num) {
        if(num == -1.0f) break;
        input.push_back(num);
    }
    
    if(input.empty()) {
        std::cerr << "Error: No valid input provided." << std::endl;
        return 1;
    } else {
        int result = sum_squares(input);
        std::cout << "Sum of squares: " << result << std::endl;
    }
    
    return 0;
}