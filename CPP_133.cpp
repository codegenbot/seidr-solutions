#include <iostream>
#include <cmath>
#include <vector>

int sum_squares(std::vector<float> lst){
    int total = 0;
    for(float x : lst){
        int ceil_x = static_cast<int>(ceil(x));
        total += pow(ceil_x,2);
    }
    return total;
}

int main() {
    assert(sum_squares({-1,1,0})==2);
    return 0;
}