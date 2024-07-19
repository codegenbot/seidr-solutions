```cpp
#include <iostream>
#include <cmath>
#include <initializer_list>
#include <cassert>

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
    double input;
    std::string strInput;
    std::cout << "Enter a number to pass to the sum_squares function: ";
    std::getline(std::cin, strInput);
    double numInput = std::stod(strInput);
    int result = sum_squares({numInput});
}