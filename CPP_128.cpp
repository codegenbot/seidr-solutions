#include <iostream>
#include <vector>
#include <cmath>

int prod_signs(std::vector<int> arr){
    if(arr.empty()){
        return -32768;
    }
    
    int signProduct = 1;
    int magnitudeSum = 0;
    
    for(int i=0; i<arr.size(); i++){
        signProduct *= (arr[i] >= 0 ? 1 : -1);
        magnitudeSum += std::abs(arr[i]);
    }
    
    return signProduct * magnitudeSum;
}

int main() {
    std::cout << prod_signs({-1, 1, 1, 0}) << std::endl;
    return 0;
}