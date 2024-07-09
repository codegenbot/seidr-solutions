#include <vector>

int prod_signs(const vector<int>& arr) {
    if (arr.empty()) return -32768;
    
    int sign_product = 1;
    long long sum_magnitudes = 0;

    for (int num : arr) {
        if (num == 0) continue;
        if (sign_product * abs(num) > INT_MAX || sign_product * abs(num) < INT_MIN) return -32768; // check overflow
        sign_product *= (num > 0 ? 1 : -1);
        sum_magnitudes += abs(num);
    }
    
    return static_cast<int>(sum_magnitudes) * sign_product;
}