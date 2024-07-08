#include <vector>
#include <cmath>

int sum_squares(std::vector<float> lst) {
    int total = 0;
    for (float num : lst) {
        total += ceil(num) * ceil(num);
    }
    return total;
}