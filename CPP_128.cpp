#include <vector>
#include <algorithm>

int prod_signs(std::vector<int> arr) {
    int sign_product = 1;
    long long sum_of_magnitudes = 0;

    for (int num : arr) {
        if (num == 0) {
            return -32768; // return -32768 for empty arr.
        }
        sign_product *= ((num > 0) ? 1 : (num < 0) ? -1 : 0);
        sum_of_magnitudes += std::abs(num);
    }

    return (sign_product == 0) ? 0 : sum_of_magnitudes * sign_product;
}