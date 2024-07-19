```cpp
#include <vector>
#include <cmath>
#include <iostream>

int sum_squares(std::vector<double> lst){
    int total = 0;
    for(double num : lst){
        int ceil_num = std::ceil(num);
        total += std::pow(ceil_num,2);
    }
    return total;
}

int main() {
    assert(sum_squares({-1.0, 1.0, 0.0}) == 2); 
    int input;
    std::cout << "Enter a number to pass to the sum_squares function: ";
    std::cin >> input;
    int result = sum_squares({(double)input});
}