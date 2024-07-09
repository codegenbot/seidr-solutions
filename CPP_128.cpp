#include <vector>

using namespace std;

int prod_signs(vector<int> arr) {
    int sign_product = 1;
    long long sum_magnitudes = 0;

    for (int num : arr) {
        if (num == 0) {
            return -32768; // zero in the array
        }
        sign_product *= (num > 0 ? 1 : (num < 0 ? -1 : 0));
        sum_magnitudes += abs(num);
    }

    if (arr.empty()) {
        return -32768;
    }

    return sign_product * sum_magnitudes;
}