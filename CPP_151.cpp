#include <vector>
#include <cmath>

long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && modf(num, &num) == 0) {
            sum += num * num;
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {1.5, 2.75, 3.25};
    long long odd_sum = 0; // Initialize odd_sum variable
    assert(double_the_difference(lst) == odd_sum);
    return 0;
}