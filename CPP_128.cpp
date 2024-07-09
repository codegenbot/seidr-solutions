#include <vector>
#include <numeric>

int prod_signs(std::vector<int> arr) {
    if (arr.empty()) return -32768;

    int sign_product = std::accumulate(arr.begin(), arr.end(), 1, 
        [](int acc, int n){ return n == 0 ? acc : (n > 0 ? 1 : -1); });

    return std::abs(std::accumulate(arr.begin(), arr.end(), 0)) * sign_product;
}