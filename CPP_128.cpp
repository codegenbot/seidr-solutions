#include <vector>

int prod_signs(const vector<int>& arr) {
    int sign_product = 1;
    long long sum_of_magnitudes = 0;

    for (int num : arr) {
        if (num == 0) {
            return 0; // If the array contains zero, the product of signs is zero
        }
        int sign = (num > 0 ? 1 : (num < 0 ? -1 : 0));
        sign_product *= sign;
        sum_of_magnitudes += abs(num);
    }

    if (arr.empty()) {
        return -32768; // Return -32768 for an empty array
    }

    return sign_product * sum_of_magnitudes;
}