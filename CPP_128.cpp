#include <vector>

using namespace std;

int prod_signs(vector<int> arr) {
    int sign_product = 1;
    long long sum_of_magnitudes = 0;

    for (int num : arr) {
        if (num == 0) {
            return 0; // If the vector contains zero, product of signs will be zero
        }
        int sign = (num > 0) ? 1 : ((num < 0) ? -1 : 0);
        sum_of_magnitudes += abs(num);
        sign_product *= sign;
    }

    if (arr.empty()) {
        return INT_MIN; // Return -32768 for empty array
    }

    return sum_of_magnitudes * sign_product;
}