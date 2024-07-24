#include <vector>
#include <cmath>

int prod_signs(std::vector<int> arr) {
    int product = 1;
    long long sum = 0;

    for (int i : arr) {
        if (i == 0) {
            return 0;
        }
        product *= (i > 0 ? 1 : -1);
        sum += std::abs(i);
    }

    if (arr.empty()) {
        return -32768;
    }

    return product * sum;
}