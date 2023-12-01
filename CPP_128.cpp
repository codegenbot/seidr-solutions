#include <vector>

int prod_signs(vector<int> arr) {
    if (arr.empty()) {
        return -32768;
    }

    int sign_product = 1;
    int magnitude_sum = 0;

    for (int num : arr) {
        sign_product *= num >= 0 ? (num > 0 ? 1 : 0) : -1;
        magnitude_sum += abs(num);
    }

    return sign_product * magnitude_sum;
}