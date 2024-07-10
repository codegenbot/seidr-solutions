#include <vector>
#include <cmath>

float sum_squares(std::vector<float> lst){
    float sum = 0;
    for (float num : lst) {
        sum += std::floor(num) * std::floor(num);
    }
    return sum;
}