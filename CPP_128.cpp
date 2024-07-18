#include <vector>
#include <cmath>

int prod_signs(std::vector<int> arr) {
    if(arr.empty()) return -32768;
    
    int product = 1;
    int sum = 0;
    
    for(int num : arr){
        if(num > 0) product *= num;
        else if(num < 0) product *= -num;
        
        sum += std::abs(num);
    }
    
    return product * sum;
}