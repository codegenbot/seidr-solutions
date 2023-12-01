#include <iostream>
#include <vector>
#include <cmath>

int prod_signs(std::vector<int> arr){
    if(arr.empty()){
        return -32768;
    }
    
    int product = 1;
    int sum = 0;
    
    for(int i=0; i<arr.size(); i++){
        product *= arr[i] < 0 ? -1 : (arr[i] > 0 ? 1 : 0);
        sum += std::abs(arr[i]);
    }
    
    return product * sum;
}

int main() {
    // Test case
    std::vector<int> arr = {-1, 1, 1, 0};
    int result = prod_signs(arr);
    std::cout << result << std::endl;
    
    return 0;
}