#include <vector>
#include <cmath>

int sum_squares(std::vector<float> lst) {
    int result = 0;
    for (float num : lst) {
        result += std::ceil(num) * std::ceil(num);
    }
    return result;
}