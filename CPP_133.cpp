#include <iostream>
#include <cmath>
#include <string>
#include <cassert>

int sum_squares(double arr[], int n){
    int total = 0;
    for(int i=0; i<n; i++){
        total += std::pow(arr[i],2);
    }
    return total;
}

int main_test(){
    double testArray[] = {1.0, 2.0, 3.0};
    int n = sizeof(testArray)/sizeof(testArray[0]);
    int result = sum_squares(testArray, n);
    std::cout << "Sum of squares: " << result << std::endl;
    
    double arr[] = {1.0, 2.0, 3.0};
    int n1 = sizeof(arr)/sizeof(arr[0]);
    int result1 = sum_squares(arr, n1);
    assert (result1 == 14);
    
    double arr1[] = {-1, 1, 0};
    int n2 = sizeof(arr1)/sizeof(arr1[0]);
    int result2 = sum_squares(arr1, n2);
    assert (result2 == 2);
    
    return 0;
}