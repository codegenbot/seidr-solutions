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
    
    double* testArray1 = new double[] {-1, 1, 0};
    int n1 = sizeof(testArray1)/sizeof(testArray1[0]);
    int result2 = sum_squares(testArray1, n1);
    delete [] testArray1; 
    assert (result == 14);
    assert (result2 == 2);
    
    return 0;
}