#include <vector>
#include <cmath>

int sum_squares(std::vector<float> lst){
    int total = 0;
    for(float n : lst){
        total += std::ceil(n) * std::ceil(n);
    }
    return total;