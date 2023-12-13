```cpp
#include <cmath>
#include <cassert>
#include <initializer_list>

int sum_squares(std::initializer_list<float> lst){
    int sum = 0;
    for(auto num : lst){
        int rounded = ceil(num);
        sum += rounded * rounded;
    }
    return sum;
}

int main() {
    assert(sum_squares({-1,1,0}) == 2);
    return 0;
}
```