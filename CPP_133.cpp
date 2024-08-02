```cpp
#include <vector>
#include <cmath>

int sum_squares(std::vector<float> lst) {
    int sum = 0;
    for (float num : lst) {
        int ceil_num = std::ceil(num);
        sum += std::pow(ceil_num, 2);
    }
    return sum;
}