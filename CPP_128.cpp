#include <vector>

int prod_signs(const vector<int>& arr) {
    int signProduct = 1;
    long long sumMagnitude = 0;

    if (arr.empty()) {
        return -32768;
    }

    for (int num : arr) {
        signProduct *= (num > 0 ? 1 : (num < 0 ? -1 : 0));
        sumMagnitude += abs(num);
    }

    return signProduct * sumMagnitude;
}