#include <vector>
#include <cmath>

int sum_squares(std::vector<float> lst){
    int sum = 0;
    for(float x : lst){
        int ceil_x = std::ceil(x);
        sum += std::pow(ceil_x,2);
    }
    return sum;

}

int main() {
    assert(sum_squares({-1,1,0})==2);

}