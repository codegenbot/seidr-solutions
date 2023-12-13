```cpp
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

int main() {
    // Test the sum_squares function
    assert(sum_squares({-1,1,0}) == 2);

    return 0;
}
```