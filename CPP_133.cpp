#include <vector>
#include <cmath>

int sum_squares(const std::vector<float>& lst) {
    int sum = 0;
    for (float num : lst) {
        int rounded_num = ceil(num);
        sum += rounded_num * rounded_num;
    }
    return sum;
}