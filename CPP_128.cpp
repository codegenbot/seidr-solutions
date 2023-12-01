#include <iostream>
#include <vector>
#include <cmath>

int prod_signs(std::vector<int> arr){
    if(arr.empty()){
        return -32768;
    }
    int sign = 1;
    int product = 1;
    int sum = 0;
    
    for(int i=0; i<arr.size(); i++){
        if(arr[i] > 0){
            sign *= 1;
        }
        else if(arr[i] < 0){
            sign *= -1;
        }
        sum += std::abs(arr[i]);
    }
    
    return sign * sum * product;
}

int main() {
    // Test cases
    std::cout << prod_signs({-1, 1, 1, 0}) << std::endl;
    std::cout << prod_signs({-1, -1, -1}) << std::endl;
    std::cout << prod_signs({-1, 1, -1}) << std::endl;
    return 0;
}