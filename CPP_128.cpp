#include <vector>

int prod_signs(std::vector<int> arr) {
    if (arr.empty()) return -32768;
    int sign_product = 1;
    long long sum_of_magnitudes = 0;
    for (int num : arr) {
        if (num < 0) sign_product *= -1;
        else if (num > 0) sign_product *= 1;
        sum_of_magnitudes += abs(num);
    }
    return sign_product * sum_of_magnitudes;
}