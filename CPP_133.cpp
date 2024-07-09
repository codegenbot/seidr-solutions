```cpp
#include <iostream>
#include <cmath>
#include <string>
#include <cassert>

int sum_squares(double arr[], int n){
    int total = 0;
    std::string str = "";
    for(int i=0; i<n; i++){
        std::string str1 = std::to_string(arr[i]) + " ";
        str += str1;
        total += std::pow(static_cast<int>(arr[i]),2);
    }
    return total;
}

int main(){
    double testArray[] = {1.0, 2.0, 3.0};
    int n = sizeof(testArray)/sizeof(testArray[0]);
    int result = sum_squares(testArray, n);
    std::cout << "Sum of squares: " << result << std::endl;
    
    // Add this assert statement if you want to test the function
    int nTest = 3;
    double testArrayTest[] = {-1.0,1.0,0.0};
    assert (sum_squares(testArrayTest,nTest) == 2);

    return 0;
}