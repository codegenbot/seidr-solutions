#include <vector>
#include <cmath>

float sum_squares(std::vector<float> lst){
    float sum = 0;
    for (float num : lst) {
        sum += pow(static_cast<int>(std::round(num)), 2);
    }
    return sum;
}