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
    std::vector<float> lst = {1.5f, 2.0f, 3.25f};
    float odd_sum = 0.0;     // Initialize the sum
    for (float num : lst) {
        if (std::floor(num) != num) {
            odd_sum += num;
        }
    }
    assert(double_the_difference(lst) == std::round(odd_sum));
    return 0;
}