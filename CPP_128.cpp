#include <iostream>
#include <vector>
#include <cmath>

int prod_signs(const std::vector<int>& arr);

int main() {
    std::vector<int> input = {2, -3, 4, -5, 6};
    
    std::cout << prod_signs(input) << std::endl;
    
    return 0;
}

int prod_signs(const std::vector<int>& arr){
    if(arr.empty()) 
        return -32768;
    
    int product = 1;
    int sum_magnitudes = 0;
    
    for(int num : arr){
        if(num > 0) 
            product *= 1;
        else if(num < 0) 
            product *= -1;
        
        sum_magnitudes += std::abs(num);
    }
    
    return product * sum_magnitudes;
}