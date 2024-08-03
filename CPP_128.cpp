#include <vector>

int prod_signs(vector<int> arr) {
    int sign_product = 1;
    long long sum_of_magnitudes = 0;

    for (int num : arr) {
        if (num == 0) {
            return 0;
        }
        int sign = num / abs(num);
        sum_of_magnitudes += labs(num);
        sign_product *= sign;
    }

    if (arr.empty()) {
        return -32768;
    }

    return sign_product * sum_of_magnitudes;
}