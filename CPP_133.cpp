#include <vector>
#include <cmath>

int sum_squares(std::vector<float> lst) {
    int sum = 0;
    for (float num : lst) {
        sum += std::pow(num, 2);
    }
    return static_cast<int>(sum); 
}