#include <vector>
#include <cmath>

int sum_squares(std::vector<float> lst){
    int sum = 0;
    for (float num : lst) {
        sum += static_cast<int>(std::ceil(num)) * static_cast<int>(std::ceil(num));
    }
    return sum;
}