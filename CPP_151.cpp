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
    std::vector<float> lst = {1.0f, 2.0f, 3.0f, 4.0f};
    float odd_sum = 14.0;     // Calculate the sum
    assert(double_the_difference(lst) == odd_sum);
    return 0;
}