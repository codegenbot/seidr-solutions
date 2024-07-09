```cpp
#include <iostream>
#include <cmath>

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
    int n1 = 3; 
    int result2 = sum_squares(testArray1, n1);
    delete [] testArray1; 
    assert (result == 14);
    assert (result2 == 2);
    
    double* testArray2 = new double[] {-4.5, 3.7, -2.8};
    int n2 = 3;
    int result3 = sum_squares(testArray2, n2);
    delete [] testArray2; 
    assert (result3 == 43.45);

    return 0;
}