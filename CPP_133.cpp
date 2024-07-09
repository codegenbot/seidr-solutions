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

void printStrings(int result1, int result2, double result3) {
    std::cout << "Sum of squares: " << sum_squares({1.0, 2.0, 3.0}, 3) << std::endl;
    std::cout << "Sum of squares: " << sum_squares({-1, 1, 0}, 3) << std::endl;
    std::cout << "Sum of squares: " << sum_squares({-4.5, 3.7, -2.8}, 3) << std::endl;
}

int main_test() {
    double testArray[] = {1.0, 2.0, 3.0};
    int n = sizeof(testArray)/sizeof(testArray[0]);
    int result = sum_squares(testArray, n);
    
    double* testArray1 = new double[] {-1, 1, 0};
    int n1 = 3; 
    int result2 = sum_squares(testArray1, n1);
    delete [] testArray1; 

    double* testArray2 = new double[] {-4.5, 3.7, -2.8};
    int n2 = 3;
    double result3 = sum_squares(testArray2, n2);
    delete [] testArray2; 
    printStrings(result, result2, result3);
    
    return 0;
}