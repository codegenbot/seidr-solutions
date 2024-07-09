#include <cmath>

int sum_squares(std::vector<float> lst) {
    int sum = 0;
    for (float num : lst) {
        int ceiling = ceil(num);
        sum += pow(ceiling, 2);
    }
    return sum;
}