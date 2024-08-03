#include <vector>
#include <cmath>

int sum_squares(std::vector<float> lst){
    int result = 0;
    for(float num : lst){
        int ceil_num = std::ceil(num);
        result += std::pow(ceil_num, 2);
    }
    return result;