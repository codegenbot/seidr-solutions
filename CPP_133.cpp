```cpp
#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

int sum_squares(std::vector<double> lst){
    int sum = 0;
    for(double num : lst){
        sum += std::ceil(num) * std::ceil(num);
    }
    return sum;
}

int main(){
    assert (sum_squares({-1.0,1.0,0.0})==2);
    std::vector<double> numbers;
    double num;
    
    while(std::cin >> num){
        numbers.push_back(num);
    }
    
    int result = sum_squares(numbers);
    std::cout << "Sum of squares: " << result << "\n";
    return 0;
}