```
#include <vector>
#include <cmath>
#include <initializer_list>
#include <cassert>

int sum_squares(std::initializer_list<float> lst){
    int total = 0;
    for(float x : lst){
        int ceil_x = std::ceil(x);
        total += static_cast<int>(ceil_x)*static_cast<int>(ceil_x);
    }
    return total;

}