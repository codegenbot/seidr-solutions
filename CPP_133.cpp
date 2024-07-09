```cpp
#include <iostream>
#include <cmath>

int sum_squares(double arr[], int n){
    int total = 0;
    for(int i=0; i<n; i++){
        double x = static_cast<double>(arr[i]);
        if(x >= 0) {
            total += std::pow(static_cast<int>(x),2);
        }
    }
    return total;
}

int main(){
    double testArray[] = {-1.0, 1.0, 0.0};
    int n = static_cast<int>(sizeof(testArray)/sizeof(testArray[0]));
    if(n < 1) {
        std::cout << "Error: Array is empty." << std::endl;
    } else {
        int result = sum_squares(testArray, n);
        std::cout << "Sum of squares: " << result << std::endl;
    }
    return 0;
}