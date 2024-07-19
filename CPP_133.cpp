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
    std::string strInput;  
    std::cout << "Enter numbers separated by space: ";
    getline(std::cin, strInput); 
    size_t pos = 0;
    int total = 0; // initialize total here
    std::string token;

    while ((pos = strInput.find(" ")) != std::string::npos) {
        token = strInput.substr(0, pos);
        total += sum_squares({std::stod(token)}); 
        strInput.erase(0, pos + 1);
    }
    
    if (!strInput.empty()) {
        total += sum_squares({std::stod(strInput)});
    }

    std::cout << "Sum of squares: " << total;
}