#include <initializer_list>

int prod_signs(const vector<int>& arr) {
    if (arr.empty()) return -32768;
    int sign_product = 1;
    long long sum_of_magnitudes = 0;
    for (const auto& num : arr) {
        if (num == 0) continue;
        int sign = num / abs(num);
        sign_product *= sign;
        sum_of_magnitudes += abs(num);
    }
    return sign_product * sum_of_magnitudes;