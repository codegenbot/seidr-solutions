```cpp
#include <vector>
#include <cmath>

long long doubleTheDifference(std::vector<float> numbers) {
    long long odd_sum = 0;
    for (float num : numbers) {
        if (num > 0 && modf(num, &num) == 0) {
            odd_sum += pow(num, 2);
        }
    }
    return odd_sum;
}