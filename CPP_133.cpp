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
    float arr[] = {1.5, 2.7, 3.8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = sum_squares(arr, n);
    std::cout << "Sum of squares: " << result << std::endl;
    return 0;
}