#include <vector>

using namespace std;

int prod_signs(vector<int> arr) {
    long long sign_product = 1;
    long long sum_of_magnitudes = 0;

    for (int num : arr) {
        if (num == 0) {
            return -32768; // Special case for 0
        }
        int sign = abs(num) / num; // 1, -1 or 0
        sign_product *= sign;
        sum_of_magnitudes += abs(num);
    }

    return sign_product * sum_of_magnitudes;
}