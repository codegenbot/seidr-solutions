#include <vector>

int prod_signs(const vector<int>& arr) {
    int sign_product = 1;
    long long sum = 0;

    for (int x : arr) {
        if (x == 0) continue;
        sign_product *= (x > 0 ? 1 : -1);
        sum += abs(x);
    }

    return (arr.empty()) ? -32768 : sum * sign_product;
}