```c++
#include <vector>
#include <cmath>

int sum_squares(std::vector<float> lst) {
    int total_sum = 0;
    for(float x : lst) {
        double ceil_value = ceil(x);
        total_sum += (ceil_value * ceil_value);
    }
    return total_sum;

}

int main() {
    assert(sum_squares({-1, 1, 0}) == 2);
}