#include <vector>
int prod_signs(std::vector<int> arr) {
    int sign_product = 1;
    long long sum_of_magnitudes = 0;
    
    for (int num : arr) {
        if (num == 0) {
            return -32768; // empty array or array with only zeros
        }
        sign_product *= (num > 0 ? 1 : (num < 0 ? -1 : 0));
        sum_of_magnitudes += abs(num);
    }
    
    return (sign_product == 0) ? -32768 : sum_of_magnitudes * sign_product;
}