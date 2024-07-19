#include <vector>
#include <algorithm>
#include <cassert>

int prod_signs(const std::vector<int>& arr) {
    assert(!arr.empty());
    
    int product = 1;
    int sum_magnitudes = 0;
    
    for(const int& num : arr){
        if(num > 0) product *= 1;
        else if(num < 0) product *= -1;
        
        sum_magnitudes += std::abs(num);
    }
    
    return product * sum_magnitudes;
}