#include <vector>
#include <cmath>

int sum_squares(std::vector<float> lst){
    int result = 0;
    for(float x : lst) {
        int ceil_x = ceil(x);
        result += (int)sqrt(ceil_x);
    }
    return result;
}