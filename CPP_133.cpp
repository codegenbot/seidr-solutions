#include <vector>
#include <cmath>

int sum_squares(std::vector<float> lst) {
    int sum = 0;
    for (float num : lst) {
        int ceil_num = ceil(num);
        sum += pow(ceil_num, 2);
    }
    return sum;
}