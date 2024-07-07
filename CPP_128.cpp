#include <vector>
#include <numeric>

int prod_signs(const vector<int>& arr) {
    if (arr.empty()) return -32768;
    int productSign = 1;
    long long sumMagnitude = 0;
    for (const auto& num : arr) {
        productSign *= (num > 0 ? 1 : (num < 0 ? -1 : 0));
        sumMagnitude += abs(num);
    }
    return productSign * sumMagnitude;
}