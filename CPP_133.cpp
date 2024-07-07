```
#include <vector>
#include <cmath>
#include <iostream>
#include <initializer_list>

int sum_squares(std::vector<float> lst){
    int total = 0;
    for(float x : lst){
        int ceil_x = std::ceil(x);
        total += std::pow(ceil_x,2);
    }
    return total;
}

{ 
    std::vector<float> input;
    float num;
    while(std::cin >> num) {
        input.push_back(num);
    }
    int output = sum_squares(input);
    std::cout << output << std::endl;