#include <iostream>
#include <cmath>

double sum_of_squares(double arr[], int n){
    double total = 0;
    for(int i=0; i<n; i++){
        total += std::pow(arr[i],2);
    }
    return total;
}

int main(int argc, char const *argv[]){
    double testArray[] = {1.0, 2.0, 3.0};
    int n = sizeof(testArray)/sizeof(testArray[0]);
    double result = sum_of_squares(testArray, n);
    std::cout << "Sum of squares: " << result << std::endl;
    
    return 0;
}