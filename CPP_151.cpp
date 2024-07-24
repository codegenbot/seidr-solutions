#include <vector>
#include <cmath>

long long doubleTheDifference(std::vector<float> lst) {
    long long sum = 0;
    long long oddSum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) {
            if (num % 2.0 == 0) {
                sum += num;
            } else {
                oddSum += num;
            }
        }
    }
    return std::abs(sum - oddSum);
}