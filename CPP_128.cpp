#include <vector>
#include <cassert>
#include <cstdlib>

int prod_signs(std::vector<int> arr){
    if(arr.empty()){
        return -32768;
    }
    
    int product = 1;
    int sum = 0;
    
    for(int i=0; i<arr.size(); i++){
        product *= arr[i] >= 0 ? 1 : -1;
        sum += std::abs(arr[i]);
    }
    
    return product * sum;
}

int main() {
    assert(prod_signs({-1, 1, 1, 0}) == 0);
    assert(prod_signs({-1, -1, -1}) == -3);
    assert(prod_signs({2, -3, 4}) == -5);
    assert(prod_signs({0}) == 0);
    
    return 0;
}