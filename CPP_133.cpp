#include <vector>
#include <cmath>

int sum_squares(std::initializer_list<float> il) {
    std::vector<float> lst(il);  
    int total = 0;
    for(float x : lst) {
        int ceil_x = (int)std::ceil(x);
        total += std::pow(ceil_x,2);
    }
    return total;
}