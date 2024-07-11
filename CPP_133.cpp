#include <vector>
#include <cmath>

int sum_squares(std::vector<float> lst) {
    int result = 0;
    for(float x : lst) {
        int ceil_x = static_cast<int>(x);
        result += pow(ceil_x, 2);
    }
    return result;
}