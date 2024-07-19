```cpp
#include <vector>
#include <cmath>
#include <iostream>

int sum_squares(int input){
    std::vector<double> lst(input, 0);
    int total = 0;
    for(double num : lst){
        int ceil_num = std::ceil(num);
        total += std::pow(ceil_num,2);
    }
    return total;
}

int main(){
    int input;
    std::cout << "Enter a number to pass to the sum_squares function: ";
    std::cin >> input;
    int result = sum_squares(input);
    return 0;
}