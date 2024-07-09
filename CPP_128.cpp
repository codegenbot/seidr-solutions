#include <vector>

int prod_signs(std::vector<int> arr) {
    int sign_product = 1;
    long long sum_of_magnitudes = 0;

    for (int num : arr) {
        if (num == 0) {
            return 0; // product of all signs is 0 when 0 exists
        }
        int sign = (num > 0) ? 1 : ((num < 0) ? -1 : 0);
        sum_of_magnitudes += abs(num);
        sign_product *= sign;
    }

    if (arr.empty()) {
        return -32768; // empty array
    }

    return sum_of_magnitudes * sign_product;
}