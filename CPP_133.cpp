#include <cmath>

int sum_squares(std::vector<float> lst){
    int total = 0;
    for(float num : lst){
        int ceil_num = std::ceil(num);
        total += std::pow(ceil_num,2);
    }
    return total;
}