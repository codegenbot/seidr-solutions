Here is the modified code:

```cpp
#include <vector>
#include <cmath>

int sum_squares(std::initializer_list<float> lst){
    int total = 0;
    for(float x : lst){
        int ceil_x = std::ceil(x);
        total += static_cast<int>(ceil_x)*static_cast<int>(ceil_x);
    }
    return total;

}

int main() {
    assert(sum_squares({-1,1,0})==2);
    return 0;
}