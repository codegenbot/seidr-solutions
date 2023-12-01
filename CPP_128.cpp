#include <iostream>
#include <vector>

int prod_signs(std::vector<int> arr){
    if(arr.empty()){
        return -32768;
    }
    
    int signProduct = 1;
    int sumMagnitudes = 0;
    
    for(int i=0; i<arr.size(); i++){
        signProduct *= (arr[i] >= 0) ? 1 : -1;
        sumMagnitudes += abs(arr[i]);
    }
    
    return signProduct * sumMagnitudes;
}

int main() {
    assert (prod_signs({-1, 1, 1, 0}) == 0);
    return 0;
}