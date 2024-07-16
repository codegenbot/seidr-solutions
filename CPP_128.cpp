#include <vector>
#include <cassert>

int prod_signs(const std::vector<int>& arr){
    if(arr.empty()){
        return -32768;
    }
    
    int product = 1;
    int sum_magnitudes = 0;
    
    for(int num : arr){
        product *= (num == 0) ? 1 : (num > 0) ? 1 : -1;
        sum_magnitudes += std::abs(num);
    }
    
    return product * sum_magnitudes;
}

int main(){
    assert (prod_signs({-1, 1, 1, 0}) == 0);
    
    return 0;
}