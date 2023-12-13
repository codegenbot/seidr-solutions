```cpp
#include <vector>
#include <cmath>
#include <cassert>
#include <cstdint>

int sum_squares(std::vector<float> lst){
    int sum = 0;
    for(std::size_t i=0; i<lst.size(); i++){
        int rounded = std::ceil(lst[i]);
        sum += rounded * rounded;
    }
    return sum;
}

int main() {
    assert(sum_squares({-1,1,0}) == 2);
    return 0;
}
```