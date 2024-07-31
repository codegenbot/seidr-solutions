#include <cmath>

int prod_signs(vector<int> arr) {
    if (arr.empty()) return -32768;

    int signProduct = 1;
    long sumOfMagnitudes = 0;

    for (int num : arr) {
        if (num == 0)
            return 0; // zero sign product
        signProduct *= (num > 0 ? 1 : -1);
        sumOfMagnitudes += abs(num);
    }

    return signProduct * sumOfMagnitudes;
}