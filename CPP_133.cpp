```cpp
#include <iostream>
#include <cmath>

int sum_squares(float arr[], int n){
    int total = 0;
    for(int i=0; i<n; i++){
        int ceil_x = std::ceil(arr[i]);
        total += std::pow(ceil_x,2);
    }
    return total;
}

int main(){
    float arr[] = {1.5f, 2.7f, 3.8f};
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = sum_squares(arr, n);
    std::cout << "Sum of squares: " << result << std::endl;
    
    float testArr[] = {-1.0f, 1.0f, 0.0f};
    int testN = sizeof(testArr)/sizeof(testArr[0]);
    assert (sum_squares(testArr, testN) == 2);
    
    return 0;
}