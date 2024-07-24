```cpp
#include <vector>
#include <cmath>

int sum_squares(std::vector<float> lst) {
    int total_sum = 0;
    for(float x : lst) {
        double ceil_value = std::ceil(x);
        total_sum += (ceil_value * ceil_value);
    }
    return total_sum;
}

int main() {
    std::vector<float> lst = {1.5, 2.3, 3.4};
    int result = sum_squares(lst);
    return 0;
}