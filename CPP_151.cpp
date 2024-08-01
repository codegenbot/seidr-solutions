```cpp
#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && modf(num, &num) == 0) {
            sum += num * num;
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {1.5, 2.0, 3.25, 4.0};
    float odd_sum = 0.0;
    for (float num : lst) {
        if (modf(num, &num) != 0) {
            odd_sum += num;
        }
    }
    assert(double_the_difference(lst) == odd_sum);
    return 0;
}