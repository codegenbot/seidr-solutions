#include <vector>

int prod_signs(const vector<int>& arr) {
    int sign_product = 1;
    long long sum_of_magnitudes = (arr.empty()) ? -32768 : 0;

    for (const auto& num : arr) {
        if (num == 0) {
            return 0; // If there's a zero, the product is zero
        }
        sign_product *= (num > 0) ? 1 : ((num < 0) ? -1 : 0);
        sum_of_magnitudes += abs(num);
    }

    return sign_product * sum_of_magnitudes;
}