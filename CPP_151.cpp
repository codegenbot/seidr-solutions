```cpp
#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num >= 0 && floor(num) == num) {
            sum += pow(num - floor(num), 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst;
    float sum = 0.0, odd_sum = 0.0;

    // use lst, sum, and odd_sum as intended...
    for (float num : lst) {
        if (num >= 0 && floor(num) == num) {
            sum += pow(num - floor(num), 2);
        } else if (num < 0 && floor(num) != num) {
            odd_sum += pow(num - floor(num), 2);
        }
    }

    return 0;
}