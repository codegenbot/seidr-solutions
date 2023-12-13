#include <vector>
#include <cmath>
#include <cassert>

int sum_squares(std::vector<float> values) {
    int sum = 0;
    for(int i=0; i<values.size(); i++){
        int rounded = ceil(values[i]);
        sum += rounded * rounded;
    }
    return sum;
}