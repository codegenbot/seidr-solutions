#include <vector>
#include <cmath>

int prod_signs(std::vector<int> arr) {
    int product = 1;
    long sum = 0;

    if (arr.empty()) return -32768;

    for (int num : arr) {
        product *= ((num > 0) ? 1 : ((num < 0) ? -1 : 0));
        sum += std::abs(num);
    }

    return product * sum;
}