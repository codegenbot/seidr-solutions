#include <iostream>
#include <vector>
#include <cmath>

int prod_signs(const std::vector<int>& arr) {
    if(arr.empty()) return -32768;
    int product = 1, sum = 0;
    for(int num : arr){
        if(num > 0) product *= 1;
        else if(num < 0) product *= -1;
        sum += std::abs(num);
    }
    return product * sum;
}

int main() {
    std::vector<int> numbers = {2, -3, 4, -5};
    int result = prod_signs(numbers);
    std::cout << "Result: " << result << std::endl;
    
    return 0;
}