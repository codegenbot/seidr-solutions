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
    std::vector<float> testArray = {-1, 1, 0};
    int n = testArray.size();
    int result = sum_squares(&testArray[0], n);
    std::cout << "Sum of squares: " << result << std::endl;
    return 0;
}