#include <vector>

using namespace std;

int prod_signs(vector<int> arr) {
    if (arr.empty()) return -32768;
    int sign_product = 1;
    long long sum_of_magnitudes = 0;
    for (int num : arr) {
        int sign = (num > 0) ? 1 : ((num < 0) ? -1 : 0);
        sign_product *= sign;
        sum_of_magnitudes += abs(num);
    }
    return sum_of_magnitudes * sign_product;
}