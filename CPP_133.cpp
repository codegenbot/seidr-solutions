```cpp
#include <vector>
#include <cmath>

int sum_squares(std::vector<float> lst){
    int sum = 0;
    if(lst.empty()){
        return 0; // Return 0 for an empty vector
    }
    for(float num : lst){
        sum += std::ceil(num) * std::ceil(num);
    }
    return sum;
}