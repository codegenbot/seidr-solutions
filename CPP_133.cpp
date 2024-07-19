```c
#include <vector>
#include <cmath>

int sum_squares(std::vector<float> lst) {
    int sum = 0;
    for(float x : lst){
        int ceil_x = std::ceil(x);
        sum += static_cast<int>(ceil_x)*static_cast<int>(ceil_x);
    }
    return sum;
}