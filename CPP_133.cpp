#include <vector>
#include <cmath>

int sum_squares(const vector<float>& lst) {
    int sum = 0;
    for (float num : lst) {
        float rounded_num = ceil(num);
        sum += rounded_num * rounded_num;
    }
    return sum;
}

assert(sum_squares({-1, 1, 0}) == 2);