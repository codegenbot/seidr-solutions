#include <vector>
#include <cmath>

float sum_squares(std::vector<float> lst){
    float sum = 0;
    for (float num : lst) {
        sum += static_cast<float>(std::round(num)) * static_cast<float>(std::round(num));
    }
    return sum;
}