#include <vector>
#include <cmath>

int sum_squares(std::vector<float> lst){
    int sum = 0;
    for (float num : lst) {
        sum += std::ceil(num) * std::ceil(num);
    }
    return sum;
}