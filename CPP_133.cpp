```cpp
#include <vector>
#include <cmath>

int sum_squares(std::vector<float> lst) {
    int sum = 0;
    for (float num : lst) {
        long ceil_num = std::ceil(num);
        sum += static_cast<int>(pow(ceil_num, 2));
    }
    return sum;
}