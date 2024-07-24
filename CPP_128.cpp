#include <vector>

int prod_signs(const vector<int>& arr) {
    long long result = 1;
    int sign_product = 1;
    
    for (const auto& num : arr) {
        if (num == 0) return -32768; // Zero in the array
        sign_product *= ((num > 0) ? 1 : ((num < 0) ? -1 : 0));
        result += abs(num);
    }
    
    return (sign_product == 0) ? result : (result * sign_product);
}