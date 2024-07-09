#include <vector>
#include <cassert>
#include <cmath>
#include <iostream>

int prod_signs(const std::vector<int>& arr) {
    if (arr.empty()) {
        return -32768;
    }
    
    int signProduct = 1;
    int sumMagnitudes = 0;
    
    for (int num : arr) {
        if (num > 0) {
            signProduct *= 1;
        } else if (num < 0) {
            signProduct *= -1;
        }
        
        sumMagnitudes += std::abs(num);
    }
    
    return signProduct * sumMagnitudes;
}

int main() {
    int n;
    std::vector<int> input;
    
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    
    std::cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        int num;
        std::cin >> num;
        input.push_back(num);
    }
    
    int result = prod_signs(input);
    
    std::cout << "Result: " << result << std::endl;
    
    return 0;
}