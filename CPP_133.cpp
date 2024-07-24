#include <vector>
#include <cmath>

int sum_squares(std::vector<float> lst) {
    int result = 0;
    for(float x : lst){
        double ceil_value = ceil(x);
        result += pow(ceil_value,2);
    }
    return result;
}