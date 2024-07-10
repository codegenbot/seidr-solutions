#include <vector>
#include <cmath>

float sum_squares(std::vector<float> lst){
    float sum = 0;
    for (float num : lst) {
        sum += std::round(num) * std::round(num);
    }
    return sum;
}