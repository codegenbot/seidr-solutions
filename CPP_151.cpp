#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> numbers) {
    long long sum = 0;
    for (float num : numbers) {
        if (num > 0 && modf(num, &num) == 0) {
            sum += num * num;
        }
    }
    return sum;
}