```cpp
#include <vector>

int sum_squares(vector<float> lst) {
    int result = 0;
    for(float x : lst){
        result += static_cast<int>(x)*static_cast<int>(x);
    }
    return result;
}