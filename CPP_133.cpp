```cpp
#include <iostream>
#include <cmath>

int sum_squares(float arr[], int n){
    int total = 0;
    for(int i=0; i<n; i++){
        float x = arr[i];
        if(x >= 0) {
            int ceil_x = std::ceil(x);
            total += std::pow(ceil_x,2);
        }
    }
    return total;
}

int main(){
    float testArray[] = {-1, 1, 0};
    int n = sizeof(testArray)/sizeof(testArray[0]);
    for (int i=0; i<n; i++) {
        std::cout << "Element: " << testArray[i] << std::endl;
    }
    return 0;
}