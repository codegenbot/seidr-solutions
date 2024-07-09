#include <vector>
#include <cmath>

int sum_squares(std::vector<float> lst){
    int total = 0;
    for(float x : lst){
        int ceil_x = std::ceil(x);
        total += std::pow(ceil_x,2);
    }
    return total;