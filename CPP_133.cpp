```cpp
#include <iostream>
#include <cmath>

int sum_squares(float arr[], int n){
    int total = 0;
    for(int i=0; i<n; i++){
        float ceil_x = std::ceil(arr[i]);
        total += std::pow(ceil_x,2);
    }
    return total;
}

int main(){
    float testArray[] = {-1.0f, 1.0f, 0.0f}; 
    int n = sizeof(testArray)/sizeof(testArray[0]);
    int result = sum_squares(testArray, n);
    std::cout << "Sum of squares: " << result << std::endl;
    return 0;

    //assert (sum_squares({-1.0f,1.0f,0.0f})==2);
}