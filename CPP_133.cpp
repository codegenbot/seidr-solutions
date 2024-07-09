```cpp
#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

int sum_squares(std::vector<float> lst){
    int sum = 0;
    for(float num : lst){
        sum += std::ceil(num) * std::ceil(num);
    }
    return sum;
}

int main(){
    assert (sum_squares({-1,1,0})==2);
    std::vector<float> numbers;
    float num;
    
    while(std::cin >> num){
        numbers.push_back(num);
    }
    
    int result = sum_squares(numbers);
    std::cout << "Sum of squares: " << result << "\n";
    return 0;
}