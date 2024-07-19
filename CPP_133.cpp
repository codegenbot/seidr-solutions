```cpp
#include <vector>
#include <cmath>
#include <iostream>
#include <initializer_list>
#include <utility>

int sum_squares(std::initializer_list<double> lst){
    int total = 0;
    for(double num : lst){
        int ceil_num = std::ceil(num);
        total += std::pow(ceil_num,2);
    }
    return total;
}

int main() {
    assert(sum_squares({-1,1,0})==2); 
    int input;
    std::cout << "Enter a number to pass to the sum_squares function: ";
    std::cin >> input;
    int result = sum_squares({(double)input});
}