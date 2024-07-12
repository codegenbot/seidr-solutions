#include <vector>

int sum_squares(std::vector<float> lst){
    int total = 0;
    for(float x : lst){
        total += ceil(x)*ceil(x);
    }
    return total;