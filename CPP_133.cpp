#include <vector>
#include <cmath>

int sum_squares(std::vector<float> lst) {
    int result = 0;
    for (float num : lst) {
        int ceilNum = ceil(num);
        result += pow(ceilNum, 2);
    }
    return result;